#include <bits/stdc++.h>

using namespace std;

class ListNode
{
public:
    int val;
    ListNode *next;
    ListNode *prev;

    ListNode(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    };
};

class myStack
{
public:
    ListNode *head = NULL;
    ListNode *tail = NULL;
    int sz = 0;

    void push(int val)
    {
        sz++;
        ListNode *newNode = new ListNode(val);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        };
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    };

    void pop()
    {
        sz--;
        ListNode *deleteNode = tail;
        tail = tail->prev;
        if (tail == NULL)
        {
            head = NULL;
        }
        else
        {

            tail->next = NULL;
        }
        delete deleteNode;
    };
    int top()
    {
        return tail->val;
    };
    int size()
    {
        return sz;
    };
    bool empty()
    {
        if (sz == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    };
};

int main()
{
    myStack nums;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        nums.push(val);
    }

    while (!nums.empty())
    {
        cout << nums.top() << endl;
        nums.pop();
    }
    return 0;
}
