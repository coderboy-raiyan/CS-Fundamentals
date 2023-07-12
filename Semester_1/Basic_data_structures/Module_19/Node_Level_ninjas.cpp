#include <bits/stdc++.h>
/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T val;
        bool isOriginal;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

int nodeLevel(TreeNode<int> *root, int searchedValue)
{
    queue<pair<TreeNode<int> *, int>> qu;
    if (root == NULL)
    {
        return 0;
    };
    qu.push({root, 1});

    while (!qu.empty())
    {
        pair<TreeNode<int> *, int> p = qu.front();
        TreeNode<int> *node = p.first;
        int level = p.second;
        qu.pop();

        if (node->val == searchedValue)
        {
            return level;
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
    return 0;
}
