#include <bits/stdc++.h>
/*
Following is the structure of Tree Node

class TreeNode
{
   public:
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val)
    {
        this->val = val;
        left = NULL;
        right = NULL;
    }
};
*/
vector<int> v;

void post_traversal(TreeNode *root)
{
    if (root == NULL)
    {
        return;
    }
    post_traversal(root->left);
    post_traversal(root->right);
    v.push_back(root->val);
};

vector<int> postorderTraversal(TreeNode *root)
{
    v.clear();
    post_traversal(root);
    return v;
}
