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

void level_traverse(Node *root)
{

    queue<Node *> qu;

    qu.push(root);

    while (!qu.empty())
    {
        Node *tmp = qu.front();
        qu.pop();

        cout << tmp->val << " ";

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

bool search_bst(Node *root, int val)
{
    if (root == NULL)
    {
        return false;
    }
    if (root->val == val)
    {
        return true;
    }
    if (val < root->val)
    {
        return search_bst(root->left, val);
    }
    else
    {
        return search_bst(root->right, val);
    }
};

int main()
{
    Node *root = take_input();
    bool isFound = search_bst(root, 200);
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
