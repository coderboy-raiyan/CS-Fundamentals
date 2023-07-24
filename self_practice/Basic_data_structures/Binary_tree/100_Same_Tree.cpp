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
    void pre_order(TreeNode *root, vector<int> &v)
    {
        if (root == NULL)
        {
            v.push_back(-1);
            return;
        };
        v.push_back(root->val);
        pre_order(root->left, v);
        pre_order(root->right, v);
    }
    bool isSameTree(TreeNode *p, TreeNode *q)
    {
        vector<int> v1;
        vector<int> v2;

        pre_order(p, v1);
        pre_order(q, v2);

        if (v1.size() != v2.size())
        {
            return false;
        };
        int i = 0;
        int sz = v1.size();
        while (i < sz)
        {
            cout << v1[i] << " " << v2[i] << endl;
            if (v1[i] != v2[i])
            {
                return false;
            };
            i++;
        };
        return true;
    }
};