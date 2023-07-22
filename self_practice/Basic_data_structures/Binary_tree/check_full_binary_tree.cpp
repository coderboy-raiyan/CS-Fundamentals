bool isSpecialBinaryTree(BinaryTreeNode<int> *root)
{
    if (root->left == NULL && root->right == NULL)
    {
        return true;
    };
    if (root->left == NULL || root->right == NULL)
    {
        return false;
    };
    bool l = isSpecialBinaryTree(root->left);
    bool r = isSpecialBinaryTree(root->right);
    if (!l || !r)
    {
        return false;
    };
    return true;
}