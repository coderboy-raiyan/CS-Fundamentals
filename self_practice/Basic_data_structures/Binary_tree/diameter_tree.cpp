#include <bits/stdc++.h>
using namespace std;

class TreeNode
{
public:
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int val)
    {
        this->val = val;
        this->right = NULL;
        this->left = NULL;
    };
};

int mx = 0;
int max_height(TreeNode *root)
{
    if (root == NULL)
    {
        return 0;
    };
    int l = max_height(root->left);
    int r = max_height(root->right);
    int d = l + r;
    mx = max(mx, d);
    return max(l, r) + 1;
};

int diameterOfBinaryTree(TreeNode *root)
{
    mx = 0;
    int h = max_height(root);
    return mx;
}
