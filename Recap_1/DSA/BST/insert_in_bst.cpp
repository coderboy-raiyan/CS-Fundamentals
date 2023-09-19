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

bool search_bst(Node *root, int x)
{
    if (root == NULL)
    {
        return false;
    };
    if (root->val == x)
    {
        return true;
    };
    if (x < root->val)
    {

        return search_bst(root->left, x);
    }
    else
    {
        return search_bst(root->right, x);
    }
};

void insert_bst(Node *&root, int val)
{
    if (val < root->val)
    {
        if (root->left == NULL)
        {
            root->left = new Node(val);
        }
        else
        {
            insert_bst(root->left, val);
        }
    }
    else
    {
        if (root->right == NULL)
        {
            root->right = new Node(val);
        }
        else
        {
            insert_bst(root->right, val);
        }
    }
};

int main()
{
    Node *root = take_input();
    insert_bst(root, 4);
    level_order(root);
    return 0;
}
