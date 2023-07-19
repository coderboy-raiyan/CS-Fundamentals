#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
    int val;
    Node *left;
    Node *right;

    Node(int val)
    {
        this->val = val;
        this->right = NULL;
        this->left = NULL;
    };
};

class MaxHeap
{
public:
    vector<int> v;

    void up_heapify(int idx)
    {
        while (idx > 0 && v[idx] > v[(idx - 1) / 2])
        {
            swap(v[(idx - 1) / 2], v[idx]);
            idx = (idx - 1) / 2;
        };
    }

    void push(int val)
    {
        v.push_back(val);
        up_heapify(v.size() - 1);
    };

    void printHeap()
    {
        for (int val : v)
        {
            cout << val << " ";
        }
    }
};

int main()
{
    MaxHeap myHeap;
    int n;
    cin >> n;

    while (n--)
    {
        int val;
        cin >> val;
        myHeap.push(val);
    }

    myHeap.printHeap();

    return 0;
}
