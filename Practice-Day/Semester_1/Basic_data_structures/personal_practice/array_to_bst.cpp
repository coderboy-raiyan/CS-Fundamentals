#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
    int val;
    Node *left;
    Node *right;

    Node(int val)
    {
        this->val = val;
        this->right = NULL;
        this->left = NULL;
    };
};

void level_order_traverse(Node *root)
{
    if (root == NULL)
    {
        return;
    };
    queue<Node *> qu;
    qu.push(root);
    while (!qu.empty())
    {
        Node *temp = qu.front();
        qu.pop();

        cout << temp->val << " ";

        if (temp->left)
        {
            qu.push(temp->left);
        }
        if (temp->right)
        {
            qu.push(temp->right);
        }
    }
};

Node *convert(vector<int> v, int l, int r)
{
    if (l > r)
    {
        return NULL;
    }
    int mid = (l + r) / 2;
    Node *root = new Node(v[mid]);
    Node *leftRoot = convert(v, l, mid - 1);
    Node *rightRoot = convert(v, mid + 1, r);
    root->left = leftRoot;
    root->right = rightRoot;
    return root;
};

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    while (n--)
    {
        int val;
        cin >> val;
        v.push_back(val);
    };
    sort(v.begin(), v.end());
    Node *root = convert(v, 0, v.size() - 1);
    level_order_traverse(root);
    return 0;
}
