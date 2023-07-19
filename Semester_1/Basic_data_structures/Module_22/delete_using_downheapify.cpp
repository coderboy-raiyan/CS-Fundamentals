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

    void down_heapify(int idx)
    {

        while (true)
        {
            int largest = idx;
            int l = (idx * 2) + 1;
            int r = (idx * 2) + 2;
            if (l < v.size() && v[largest] < v[l])
            {
                largest = l;
            }
            if (r < v.size() && v[largest] < v[r])
            {
                largest = r;
            }
            if (largest == idx)
            {
                break;
            }
            swap(v[idx], v[largest]);
            idx = largest;
        }
    };

    void deleteNode()
    {
        swap(v[0], v[v.size() - 1]);
        v.pop_back();
        down_heapify(0);
    }

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
    myHeap.deleteNode();
    myHeap.printHeap();

    return 0;
}
