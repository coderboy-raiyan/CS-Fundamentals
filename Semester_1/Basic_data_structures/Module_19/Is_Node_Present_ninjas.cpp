/************************************************************

    Following is the Binary Tree node structure

    template <typename T>
    class BinaryTreeNode
    {
        public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data)
        {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

bool isNodePresent(BinaryTreeNode<int> *root, int x)
{
    queue<BinaryTreeNode<int> *> qu;
    if (root == NULL)
    {
        return false;
    };
    qu.push(root);
    while (!qu.empty())
    {
        BinaryTreeNode<int> *tmp = qu.front();
        qu.pop();

        if (tmp->data == x)
        {
            return true;
        }

        if (tmp->left)
        {
            qu.push(tmp->left);
        }
        if (tmp->right)
        {
            qu.push(tmp->right);
        }
    }
    return false;
}