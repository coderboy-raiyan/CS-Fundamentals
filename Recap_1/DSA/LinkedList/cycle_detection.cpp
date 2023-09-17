#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *prev;

    Node(int val)
    {
        this->val = val;
        this->prev = NULL;
        this->next = NULL;
    };
};

class DoublyLinkedList
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
        head->prev = newNode;
        head = newNode;
    };
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
        newNode->prev = tail;
        tail = newNode;
    };

    void insert_at_position(int val, int pos)
    {
        if (pos == sz)
        {
            insert_tail(val);
            return;
        }
        if (pos == 0)
        {
            insert_head(val);
            return;
        };
        Node *newNode = new Node(val);
        Node *lead = findNode(pos);
        newNode->next = lead->next;
        lead->next->prev = newNode;
        newNode->prev = lead;
        lead->next = newNode;
    };

    void delete_head()
    {
        Node *temp = head;
        if (head == NULL)
        {
            tail = NULL;
        }
        else
        {

            head = head->next;
            if (head != NULL)
            {

                head->prev = NULL;
            }
        };
        delete temp;
    };

    void delete_tail()
    {
        Node *temp = tail;
        if (tail == NULL)
        {
            head = NULL;
        }
        else
        {
            tail = tail->prev;
            if (tail != NULL)
            {
                tail->next = NULL;
            };
        };
        delete temp;
    };

    void reverse_list()
    {
        Node *i = head;
        Node *j = tail;
        while (i != j && i->next != j)
        {
            swap(i->val, j->val);
            i = i->next;
            j = j->prev;
        };
    }

    void print_list()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->val << " ";
            temp = temp->next;
        };
    }

private:
    Node *findNode(int pos)
    {
        Node *temp = head;
        int i = 0;
        while (i < pos - 1)
        {
            temp = temp->next;
            i++;
        }
        return temp;
    };
};

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(40);
    Node *c = new Node(30);

    head->next = a;
    a->next = b;
    b->next = c;

    Node *slow = head;
    Node *fast = head;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
        {
            cout << "Cycle Detected";
            break;
        }
    }

    return 0;
}
