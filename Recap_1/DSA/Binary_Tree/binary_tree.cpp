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

void pre_order(Node *root)
{
    if (root == NULL)
    {
        return;
    };
    cout << root->val << " ";
    pre_order(root->left);
    pre_order(root->right);
};
void post_order(Node *root)
{
    if (root == NULL)
    {
        return;
    };
    post_order(root->left);
    post_order(root->right);
    cout << root->val << " ";
};

int main()
{
    Node *root = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    Node *e = new Node(60);
    Node *f = new Node(70);

    root->left = a;
    root->right = b;
    a->left = c;
    a->right = d;
    b->left = e;
    b->right = f;
    post_order(root);
    return 0;
}
