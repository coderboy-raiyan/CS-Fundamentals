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
vector<int> v;

int count_leaf(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    if (root->left == NULL && root->right == NULL)
    {
        v.push_back(root->val);
        return root->val;
    }
    else
    {
        int l = count_leaf(root->left);
        int r = count_leaf(root->right);
        return max(l, r);
    }
}

bool isFullBinary(Node *root)
{
    if (root->left == NULL && root->right == NULL)
    {
        return true;
    }
    if (root->left == NULL || root->right == NULL)
    {
        return false;
    };
    bool l = isFullBinary(root->left);
    bool r = isFullBinary(root->right);

    if (l == false || r == false)
    {
        return false;
    }
    return true;
};

bool isPerfect(Node *root)
{
    if (root->left == NULL && root->right == NULL)
    {
        return true;
    };
    if (root->left == NULL || root->right == NULL)
    {
        return false;
    };
    bool l = isPerfect(root->left);
    bool r = isPerfect(root->right);
    if (l == false || r == false)
    {
        return false;
    }
    else
    {

        return true;
    }
};

int main()
{
    Node *root = take_input();
    bool isFull = isFullBinary(root);
    if (isFull)
    {
        cout << "full binary tree" << endl;
    }
    else
    {
        cout << "Not a  Binary tree" << endl;
    }

    return 0;
}
