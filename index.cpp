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

Node *take_input()
{
    int val;
    cin >> val;
    queue<Node *> qu;
    Node *root = NULL;
    if (val != -1)
    {
        root = new Node(val);
    };
    while (!qu.empty())
    {
        Node *tmp = qu.front();
        qu.pop();

        int l, r;
        cin >> l >> r;

        Node *left = NULL;
        Node *right = NULL;

        if (l != 1)
        {
            left = new Node(l);
        }
        if (r != -1)
        {
            right = new Node(r);
        }

        tmp->left = left;
        tmp->right = right;

        if (tmp->left)
        {
            qu.push(tmp->left);
        }
        if (tmp->right)
        {
            qu.push(tmp->right);
        }
    }
};

int main()
{

    return 0;
}
