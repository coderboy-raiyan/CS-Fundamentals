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
    stack<int> st;
    queue<Node *> qu;

    qu.push(root);

    while (!qu.empty())
    {
        Node *tmp = qu.front();
        qu.pop();

        st.push(tmp->val);

        if (tmp->right)
        {
            qu.push(tmp->right);
        }
        if (tmp->left)
        {
            qu.push(tmp->left);
        }
    }

    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
};

int main()
{
    Node *root = take_input();
    level_traverse(root);

    return 0;
}
