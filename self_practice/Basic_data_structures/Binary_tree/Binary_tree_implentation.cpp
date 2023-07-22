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

class BinaryTree
{
public:
    Node *root = NULL;

    void insert()
    {
        int val;
        cin >> val;
        queue<Node *> qu;
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
            };
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
    };
    void in_order_traverse(Node *root)
    {
        if (root == NULL)
        {
            return;
        }
        in_order_traverse(root->left);
        cout << root->val << " ";
        in_order_traverse(root->right);
    };

    int count_leaf_nodes(Node *root)
    {
        if (root == NULL)
        {
            return 0;
        }
        if (root->left == NULL && root->right == NULL)
        {
            return 1;
        }
        int l = count_leaf_nodes(root->left);
        int r = count_leaf_nodes(root->right);
        return l + r;
    };

    int max_height(Node *root)
    {
        if (root == NULL)
        {
            return 0;
        };
        int l = max_height(root->left);
        int r = max_height(root->right);
        return max(l, r) + 1;
    };
};

int main()
{
    BinaryTree myTree;
    myTree.insert();
    int mx = myTree.max_height(myTree.root);
    cout << mx;
    return 0;
}
