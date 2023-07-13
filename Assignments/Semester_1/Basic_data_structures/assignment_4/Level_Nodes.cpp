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

vector<int> v;

void print_target(Node *root, int x)
{
    queue<pair<Node *, int>> qu;
    if (root)
    {

        qu.push({root, 0});
    }
    bool flag = false;

    while (!qu.empty())
    {
        pair<Node *, int> p = qu.front();
        Node *tmp = p.first;
        int level = p.second;
        qu.pop();

        if (level == x)
        {
            v.push_back(tmp->val);
        }

        if (tmp->left)
        {
            qu.push({tmp->left, level + 1});
        }
        if (tmp->right)
        {
            qu.push({tmp->right, level + 1});
        }
    }
};

int main()
{
    Node *root = take_input();
    int x;
    cin >> x;
    print_target(root, x);
    if (!v.empty())
    {
        for (int num : v)
        {
            cout << num << " ";
        }
    }
    else
    {
        cout << "Invalid" << endl;
    }
    return 0;
}
