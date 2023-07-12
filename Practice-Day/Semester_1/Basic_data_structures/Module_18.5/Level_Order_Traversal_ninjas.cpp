#include <bits/stdc++.h>
/************************************************************

    Following is the BinaryTreeNode class structure

    template <typename T>
    class BinaryTreeNode {
       public:
        T val;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
vector<int> getLevelOrder(BinaryTreeNode<int> *root)
{
    vector<int> v;
    queue<BinaryTreeNode<int> *> qu;
    if (root == NULL)
    {
        return v;
    }
    qu.push(root);
    while (!qu.empty())
    {
        BinaryTreeNode<int> *tmp = qu.front();
        qu.pop();

        v.push_back(tmp->val);

        if (tmp->left)
        {
            qu.push(tmp->left);
        }
        if (tmp->right)
        {
            qu.push(tmp->right);
        }
    }
    return v;
}