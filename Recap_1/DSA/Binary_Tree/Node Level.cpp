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
    if (root == NULL)
    {
        return 0;
    };
    bool isFound = false;
    queue<pair<TreeNode<int> *, int>> qu;
    qu.push({root, 1});
    while (!qu.empty())
    {
        pair<TreeNode<int> *, int> pNode = qu.front();
        TreeNode<int> *parent = pNode.first;
        int level = pNode.second;
        qu.pop();

        if (parent->val == searchedValue)
        {
            isFound = true;
            return level;
        };

        if (parent->left)
        {
            qu.push({parent->left, level + 1});
        }
        if (parent->right)
        {
            qu.push({parent->right, level + 1});
        }
    }
    if (!isFound)
    {
        return 0;
    }
}
