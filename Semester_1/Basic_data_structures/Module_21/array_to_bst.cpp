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
Node *take_input()
{
    Node *root = NULL;
    queue<Node *> qu;
    int val;
    cin >> val;
    if (val != -1)
    {
        root = new Node(val);
        qu.push(root);
    }

    while (!qu.empty())
    {
        Node *temp = qu.front();
        qu.pop();

        int l, r;
        cin >> l >> r;

        Node *left = NULL;
        Node *right = NULL;

        if (l != -1)
        {

            left = new Node(l);
        }

        if (r != -1)
        {
            right = new Node(r);
        }

        temp->left = left;
        temp->right = right;

        if (temp->left)
        {
            qu.push(left);
        }
        if (temp->right)
        {
            qu.push(right);
        }
    }
    return root;
};

void level_traverse(Node *root)
{

    queue<Node *> qu;

    qu.push(root);

    while (!qu.empty())
    {
        Node *tmp = qu.front();
        qu.pop();

        cout << tmp->val << " ";

        if (tmp->left)
        {
            qu.push(tmp->left);
        }
        if (tmp->right)
        {
            qu.push(tmp->right);
        }
    }
};

Node *convert(vector<int> a, int sz, int l, int r)
{
    if (l > r)
    {
        return NULL;
    };
    int mid = (l + r) / 2;
    Node *root = new Node(a[mid]);
    Node *leftRoot = convert(a, sz, l, mid - 1);
    Node *rightRoot = convert(a, sz, mid + 1, r);
    root->left = leftRoot;
    root->right = rightRoot;
    return root;
};

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        v.push_back(num);
    }
    sort(v.begin(), v.end());
    Node *root = convert(v, n, 0, v.size() - 1);
    level_traverse(root);
    return 0;
}
