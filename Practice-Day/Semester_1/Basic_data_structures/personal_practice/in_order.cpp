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
    Node *root = NULL;
    queue<Node *> qu;
    int val;
    cin >> val;
    if (val != -1)
    {
        root = new Node(val);
        qu.push(root);
    }

    while (!qu.empty())
    {
        Node *temp = qu.front();
        qu.pop();

        int l, r;
        cin >> l >> r;

        Node *left = NULL;
        Node *right = NULL;

        if (l == -1)
        {
            left = NULL;
        }
        else
        {
            left = new Node(l);
        }
        if (r == -1)
        {
            right = NULL;
        }
        else
        {
            right = new Node(r);
        }

        temp->left = left;
        temp->right = right;

        if (temp->left)
        {
            qu.push(left);
        }
        if (temp->right)
        {
            qu.push(right);
        }
    }
    return root;
};

void level_order_traverse(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    queue<Node *> qu;
    qu.push(root);
    while (!qu.empty())
    {
        Node *temp = qu.front();
        qu.pop();

        cout << temp->val << endl;

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

void in_order_traverse(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    in_order_traverse(root->left);
    cout << root->val << endl;
    in_order_traverse(root->right);
};

int main()
{
    Node *root = take_input();
    in_order_traverse(root);
    return 0;
}
