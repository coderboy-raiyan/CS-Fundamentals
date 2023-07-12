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
int mx = 0;
int count_diameter(TreeNode<int> *root)
{
    if (root == NULL)
    {
        return 0;
    };
    int l = count_diameter(root->left);
    int r = count_diameter(root->right);
    int d = l + r;
    mx = max(mx, d);
    return max(l, r) + 1;
};

int diameterOfBinaryTree(TreeNode<int> *root)
{
    mx = 0;
    int d = count_diameter(root);
    return mx;
}
