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

bool is_Perfect(Node *root)
{
    if (root->left == NULL && root->right == NULL)
    {
        return true;
    };
    if (root->left == NULL || root->right == NULL)
    {
        return false;
    }
    int l = is_Perfect(root->left);
    int r = is_Perfect(root->right);
    if (l == false || r == false)
    {
        return false;
    }
    return true;
}

int main()
{
    Node *root = take_input();
    bool perf = is_Perfect(root);
    if (perf)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO";
    }

    return 0;
}
