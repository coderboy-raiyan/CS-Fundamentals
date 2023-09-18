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
    Node *root = NULL;
    if (val != -1)
    {
        root = new Node(val);
    }
    queue<Node *> qu;
    if (root)
    {
        qu.push(root);
    }
    while (!qu.empty())
    {
        Node *parent = qu.front();
        qu.pop();

        int u, v;
        cin >> u >> v;

        Node *left;
        Node *right;

        if (u != -1)
        {
            left = new Node(u);
        }
        else
        {
            left = NULL;
        }
        if (v != -1)
        {
            right = new Node(v);
        }
        else
        {
            right = NULL;
        }
        parent->left = left;
        parent->right = right;
        if (parent->left != NULL)
        {
            qu.push(parent->left);
        }
        if (parent->right != NULL)
        {
            qu.push(parent->right);
        }
    }
    return root;
};

void level_order(Node *root)
{
    queue<Node *> qu;
    qu.push(root);
    while (!qu.empty())
    {
        Node *parent = qu.front();
        qu.pop();

        cout << parent->val << " ";

        if (parent->left)
        {
            qu.push(parent->left);
        };
        if (parent->right)
        {
            qu.push(parent->right);
        };
    }
};

int mx_height(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    int opt1 = mx_height(root->left);
    int opt2 = mx_height(root->right);
    return max(opt1, opt2) + 1;
};

int count_leaf(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    if (root->left == NULL && root->right == NULL)
    {
        return 1;
    };
    int opt1 = count_leaf(root->left);
    int opt2 = count_leaf(root->right);
    return opt1 + opt2;
}

int main()
{
    Node *root = take_input();
    int leafNodes = count_leaf(root);
    cout << leafNodes;
    return 0;
}
