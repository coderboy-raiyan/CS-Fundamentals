#include <bits/stdc++.h>
/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

vector<int> getLeftView(TreeNode<int> *root)
{
    queue<pair<TreeNode<int> *, int>> qu;
    vector<int> v;
    if (root == NULL)
    {
        return v;
    }
    qu.push({root, 1});
    bool f[100000] = {false};
    while (!qu.empty())
    {
        pair<TreeNode<int> *, int> pr = qu.front();
        qu.pop();
        TreeNode<int> *node = pr.first;
        int level = pr.second;

        if (!f[level])
        {
            v.push_back(node->data);
            f[level] = true;
        }

        if (node->left)
        {
            qu.push({node->left, level + 1});
        }
        if (node->right)
        {
            qu.push({node->right, level + 1});
        }
    }
    return v;
}