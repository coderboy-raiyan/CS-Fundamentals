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

class MyStack
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
        tail->next->prev = tail;
        tail = newNode;
    }
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
        };
        delete deleteNode;
    };

    int top()
    {
        return tail->val;
    }

    int size()
    {
        return sz;
    }

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
    MyStack st;
    st.push(10);
    st.push(20);
    st.push(30);

    while (!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }

    return 0;
}
