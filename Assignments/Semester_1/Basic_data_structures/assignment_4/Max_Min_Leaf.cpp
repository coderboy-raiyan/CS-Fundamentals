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
            qu.push(left);
        }
        if (temp->right)
        {
            qu.push(right);
        }
    }
    return root;
};

int min_leaf(Node *root)
{
    if (root == NULL)
    {
        return INT_MAX;
    };
    if (root->left == NULL && root->right == NULL)
    {
        return root->val;
    };
    int l = min_leaf(root->left);
    int r = min_leaf(root->right);
    return min(l, r);
};
int max_leaf(Node *root)
{
    if (root == NULL)
    {
        return INT_MIN;
    };
    if (root->left == NULL && root->right == NULL)
    {
        return root->val;
    };
    int l = max_leaf(root->left);
    int r = max_leaf(root->right);
    return max(l, r);
};

int main()
{
    Node *root = take_input();
    int mn = min_leaf(root);
    int mx = max_leaf(root);
    cout << mx << " " << mn;
    return 0;
}
