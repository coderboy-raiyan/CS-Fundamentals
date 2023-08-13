#include <bits/stdc++.h>

using namespace std;

const int N = 1e3 + 5; // Maximum number of nodes

vector<int> adj[N]; // Adjacency list for the graph

bool visited[N]; // Array to keep track of visited nodes
int level[N];    // Array to store the level of each node in the BFS traversal
int parent[N];   // Array to store the parent of each node in the BFS traversal

void bfs(int s)
{
    queue<int> q;
    q.push(s);
    visited[s] = true;
    level[s] = 0;
    parent[s] = -1;

    while (!q.empty()) // This loop runs at most O(V + E) times, where V is the number of nodes and E is the number of edges.
    {
        int u = q.front();
        q.pop();

        for (int v : adj[u]) // This loop iterates over the neighbors of each node, which takes O(E) time in total.
        {
            if (!visited[v]) // If the neighbor is not visited yet
            {
                q.push(v);               // Add the neighbor to the queue
                visited[v] = true;       // Mark the neighbor as visited
                level[v] = level[u] + 1; // Update the level of the neighbor
                parent[v] = u;           // Set the parent of the neighbor to the current node
            }
        }
    }
};

int main()
{
    int n, m;
    cin >> n >> m; // Input the number of nodes and edges

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v; // Input the edges (u, v)

        adj[u].push_back(v); // Add v to the adjacency list of u
        adj[v].push_back(u); // Add u to the adjacency list of v
    };

    int s, d;
    cin >> s >> d; // Input the source and destination nodes

    bfs(s); // Call the BFS function to perform traversal and calculate distances

    for (int i = 1; i <= n; i++)
    {
        cout << "Parent " << i << " : " << parent[i] << endl; // Print parents of all nodes
    }
    cout << endl;

    vector<int> path;
    int curr = d;
    while (curr != -1)
    {
        path.push_back(curr); // Build the path from destination to source
        curr = parent[curr];  // Move to the parent of the current node
    }
    reverse(path.begin(), path.end()); // Reverse the path to get source to destination

    cout << "Distance : " << level[d] << endl
         << endl; // Print the distance to destination

    cout << "Path : ";
    for (int node : path)
    {
        cout << node << " "; // Print the nodes in the path
    }

    return 0;
}

// Time Complexity:
// - BFS traversal: O(V + E), where V is the number of nodes and E is the number of edges.
// - Building the path: O(V)
// - Reversing the path: O(V)
// - Printing: O(V)
// So, the overall time complexity of the program is dominated by BFS and is O(V + E).
