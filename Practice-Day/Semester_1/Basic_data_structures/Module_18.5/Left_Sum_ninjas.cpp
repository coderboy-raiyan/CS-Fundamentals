#include <bits/stdc++.h>
/*
    Tree Node class.

    class BinaryTreeNode
    {
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    }
*/

long long leftSum(BinaryTreeNode<int> *root)
{
    long long int cnt = 0;
    queue<BinaryTreeNode<int> *> qu;
    if (root == NULL)
    {
        return cnt;
    }
    qu.push(root);
    while (!qu.empty())
    {
        BinaryTreeNode<int> *tmp = qu.front();
        qu.pop();

        if (tmp->left)
        {
            qu.push(tmp->left);
            cnt += tmp->left->data;
        }
        if (tmp->right)
        {
            qu.push(tmp->right);
        }
    }
    return cnt;
}