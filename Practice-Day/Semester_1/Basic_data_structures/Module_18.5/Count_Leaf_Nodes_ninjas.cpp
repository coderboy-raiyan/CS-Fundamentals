/**********************************************************

    Following is the Binary Tree Node class structure:

    template <typename T>
    class BinaryTreeNode {
      public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
                this -> data = data;
                left = NULL;
                right = NULL;
        }
    };

***********************************************************/
int count_leaf(BinaryTreeNode<int> *root)
{
    if (root == NULL)
    {
        return 0;
    }
    if (root->left == NULL && root->right == NULL)
    {
        return 1;
    }
    else
    {
        return count_leaf(root->left) + count_leaf(root->right);
    }
};

int noOfLeafNodes(BinaryTreeNode<int> *root)
{
    int count = count_leaf(root);
    return count;
}