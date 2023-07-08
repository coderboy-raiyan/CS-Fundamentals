#include <bits/stdc++.h>

using namespace std;

class ListNode
{
public:
    int val;
    ListNode *next;

    ListNode(int val)
    {
        this->val = val;
        this->next = NULL;
    };
};

class MyQueue
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
        }
        tail->next = newNode;
        tail = newNode;
    }

    void pop()
    {
        sz--;
        ListNode *deleteNode = head;
        head = head->next;
        if (head == NULL)
        {
            tail = NULL;
        };
        delete deleteNode;
    };

    int front()
    {
        return head->val;
    };

    int size()
    {
        return sz;
    }

    bool empty()
    {
        if (sz)
        {
            return false;
        };

        return true;
    }
};

int main()
{
    MyQueue qe;
    qe.push(10);
    qe.push(20);
    qe.push(30);

    while (!qe.empty())
    {
        cout << qe.front() << endl;
        qe.pop();
    }

    return 0;
}
