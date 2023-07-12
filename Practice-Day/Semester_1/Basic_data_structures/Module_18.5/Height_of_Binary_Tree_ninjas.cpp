#include <bits/stdc++.h>
/************************************************************

    Following is the TreeNode class structure

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
int max_depth(TreeNode<int> *root)
{
    if (root == NULL)
    {
        return 0;
    };
    return max(max_depth(root->left), max_depth(root->right)) + 1;
};

int maxDepth(TreeNode<int> *root)
{
    int count = max_depth(root);
    return count - 1;
}