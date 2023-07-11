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
    Node *root;
    if (val == -1)
    {
        root = NULL;
    }
    else
    {
        root = new Node(val);
    }
    queue<Node *> qu;
    if (root)
    {
        qu.push(root);
    };
    while (!qu.empty())
    {
        Node *temp = qu.front();
        qu.pop();

        int l, r;
        cin >> l >> r;
        Node *left;
        Node *right;

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

int count_nodes(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    return count_nodes(root->left) + count_nodes(root->right) + 1;
};

int main()
{
    Node *root = take_input();
    int count = count_nodes(root);
    cout << count;
    return 0;
}
