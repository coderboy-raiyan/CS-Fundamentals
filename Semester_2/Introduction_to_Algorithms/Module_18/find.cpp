#include <bits/stdc++.h>

using namespace std;

vector<int> parent = {-1, -1, 1, 1, 6, 4, -1, -1};

int findLeader(int n)
{
    while (parent[n] != -1)
    {
        n = parent[n];
    }
    return n;
}

int main()
{
    cout << findLeader(5);
    return 0;
}
