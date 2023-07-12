/************************************************************

    Following is the TreeNode class structure:

    template <typename T>

    class TreeNode {
    public:
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;
        TreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
#include <bits/stdc++.h>

vector<int> reverseLevelOrder(TreeNode<int> *root)
{
    vector<int> v;
    queue<TreeNode<int> *> qu;
    if (root == NULL)
    {
        return v;
    }
    qu.push(root);
    while (!qu.empty())
    {
        TreeNode<int> *tmp = qu.front();
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
    reverse(v.begin(), v.end());
    return v;
}