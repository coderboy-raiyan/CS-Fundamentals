/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution
{
public:
    queue<int> qu1;
    queue<int> qu2;
    void count1_leaf(TreeNode *root)
    {
        if (root == NULL)
        {
            return;
        };
        if (root->left == NULL && root->right == NULL)
        {
            qu1.push(root->val);
        };
        count1_leaf(root->left);
        count1_leaf(root->right);
    };
    void count2_leaf(TreeNode *root)
    {
        if (root == NULL)
        {
            return;
        };
        if (root->left == NULL && root->right == NULL)
        {
            qu2.push(root->val);
        };
        count2_leaf(root->left);
        count2_leaf(root->right);
    };
    bool leafSimilar(TreeNode *root1, TreeNode *root2)
    {
        if (root1 == NULL || root2 == NULL)
        {
            return false;
        };
        count1_leaf(root1);
        count2_leaf(root2);
        if (qu1.size() != qu2.size())
        {
            return false;
        };
        while (!qu1.empty())
        {
            if (qu1.front() != qu2.front())
            {
                return false;
            };
            qu1.pop();
            qu2.pop();
        }
        return true;
    }
};