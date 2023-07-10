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
        }
        tail->next = newNode;
        newNode->prev = tail;
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
        }
        delete deleteNode;
    }

    int top()
    {
        return tail->val;
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
        }
        return true;
    }
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
        newNode->prev = tail;
        tail = newNode;
    };

    void pop()
    {
        sz--;
        ListNode *deleteNode = head;
        head = head->next;

        if (head == NULL)
        {
            tail = NULL;
        }
        else
        {
            head->prev = NULL;
        }
        delete deleteNode;
    }
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
        }
        return true;
    }
};

int main()
{
    int n, m;
    cin >> n >> m;

    MyStack st;
    MyQueue qu;

    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        st.push(num);
    }
    for (int i = 0; i < m; i++)
    {
        int num;
        cin >> num;
        qu.push(num);
    }

    if (st.size() != qu.size())
    {
        cout << "NO";
        return 0;
    }

    while (!st.empty())
    {
        if (st.top() != qu.front())
        {
            cout << "NO";
            return 0;
        }
        st.pop();
        qu.pop();
    }

    cout << "YES";

    return 0;
}
