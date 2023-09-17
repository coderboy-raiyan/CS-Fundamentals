#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    };
};

class SinglyLinkedList
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;

    void insert_head(int val)
    {
        sz++;
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        };
        newNode->next = head;
        head = newNode;
    }

    void insert_tail(int val)
    {
        sz++;
        Node *newNode = new Node(val);
        if (tail == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        };
        tail->next = newNode;
        tail = newNode;
    };
    void insert_at_postion(int val, int pos)
    {
        if (pos == sz)
        {
            insert_tail(val);
            return;
        };
        if (pos == 0)
        {
            insert_head(val);
            return;
        };
        sz++;
        Node *temp = head;
        int i = 0;
        while (i < pos - 1)
        {
            temp = temp->next;
            i++;
        };

        Node *newNode = new Node(val);
        newNode->next = temp->next;
        temp->next = newNode;
    };
    void delete_head()
    {
        sz--;
        Node *deletedNode = head;
        if (head == NULL)
        {
            tail = NULL;
        }
        else
        {
            head = head->next;
        }
        delete deletedNode;
    }
    void delete_tail()
    {
        sz--;
        Node *temp = head;
        if (temp->next == NULL)
        {
            tail = NULL;
            head = NULL;
            return;
        };
        while (temp != NULL && temp->next->next != NULL)
        {
            temp = temp->next;
        };
        Node *deletedNode = tail;
        temp->next = NULL;
        tail = temp;
        delete deletedNode;
    }
    void reverse_list(Node *curr)
    {
        if (curr->next == NULL)
        {
            head = curr;
            return;
        };
        reverse_list(curr->next);
        curr->next->next = curr;
        curr->next = NULL;
    };
    void print_list()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->val << " ";
            temp = temp->next;
        };
    }
};

int main()
{
    SinglyLinkedList sl;
    while (true)
    {
        int n;
        cin >> n;
        if (n != -1)
        {
            sl.insert_tail(n);
        }
        else
        {
            break;
        }
    }

    sl.reverse_list(sl.head);
    sl.print_list();

    return 0;
}
