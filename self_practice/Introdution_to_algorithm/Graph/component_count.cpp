#include <bits/stdc++.h>

using namespace std;

const int N = 1e3 + 5;
vector<int> adj[N];
bool visited[N];

int comp = 0;

bool dfs(int u)
{
    // # This function does a depth-first search on the graph starting from vertex u.
    // # It marks all the vertices it visits as visited.

    if (adj[u].size())
    {
        visited[u] = true;
        comp++;
        // # If vertex u has any neighbors, we mark it as visited and then recursively call dfs() on all its neighbors.
        for (int v : adj[u])
        {
            if (visited[v])
            {
                continue;
            };
            dfs(v);
        }
        return true;
    }
    else
    {
        return false;
    }
};

void bfs(int s)
{
    // # This function does a breadth-first search on the graph starting from vertex s.
    // # It marks all the vertices it visits as visited.

    queue<int> q;
    q.push(s);
    visited[s] = true;

    while (!q.empty())
    {
        int u = q.front();
        q.pop();

        // # For each vertex u in the queue, we mark it as visited and then add all its neighbors to the queue.
        for (int v : adj[u])
        {
            if (visited[v])
            {
                continue;
            };
            q.push(v);
            visited[v] = true;
        };
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    };
    int total_collection = 0;
    vector<int> components;
    // # For each vertex in the graph, we do a depth-first search to find all the connected components.
    for (int i = 0; i <= 1000; i++)
    {
        if (visited[i])
        {
            continue;
        };
        comp = 0;
        bool isValid = dfs(i);
        if (isValid)
        {
            total_collection++;
            components.push_back(comp);
        }
    };
    cout << "Total collection : " << total_collection << " their nodes - ";
    for (int sz : components)
    {
        cout << sz << " ";
    }

    return 0;
}
