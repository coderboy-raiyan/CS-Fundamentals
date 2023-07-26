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
        qu.push(root);
    };
    while (!qu.empty())
    {
        Node *temp = qu.front();
        qu.pop();

        int l, r;
        cin >> l >> r;

        Node *left = NULL;
        Node *right = NULL;

        if (l != -1)
        {
            left = new Node(l);
        }

        if (r != -1)
        {
            right = new Node(r);
        }

        temp->left = left;
        temp->right = right;

        if (temp->left)
        {
            qu.push(temp->left);
        }
        if (temp->right)
        {
            qu.push(temp->right);
        }
    }
    return root;
};

void traverse_level(Node *root)
{
    queue<Node *> qu;
    qu.push(root);
    while (!qu.empty())
    {
        Node *temp = qu.front();
        qu.pop();

        cout << temp->val << " ";

        if (temp->left)
        {
            qu.push(temp->left);
        }
        if (temp->right)
        {
            qu.push(temp->right);
        }
    }
};

bool search_bst(Node *root, int val)
{
    if (root == NULL)
    {
        return false;
    };
    if (root->val == val)
    {
        return true;
    }
    else
    {
        if (val < root->val)
        {
            search_bst(root->left, val);
        }
        else
        {
            search_bst(root->right, val);
        }
    }
};

int main()
{
    Node *root = take_input();
    // traverse_level(root);
    bool isFound = search_bst(root, 100);
    if (isFound)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}
