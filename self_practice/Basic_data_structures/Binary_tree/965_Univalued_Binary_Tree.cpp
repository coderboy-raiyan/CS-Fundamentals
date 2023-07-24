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
    bool isUnivalTree(TreeNode *root)
    {
        if (root == NULL)
        {
            return false;
        };
        queue<TreeNode *> qu;
        stack<int> st;
        qu.push(root);
        while (!qu.empty())
        {
            TreeNode *node = qu.front();
            qu.pop();

            if (!st.empty() && st.top() != node->val)
            {
                return false;
            }
            else
            {
                st.push(node->val);
            };

            if (node->left)
            {
                qu.push(node->left);
            }
            if (node->right)
            {
                qu.push(node->right);
            }
        };
        return true;
    }
};