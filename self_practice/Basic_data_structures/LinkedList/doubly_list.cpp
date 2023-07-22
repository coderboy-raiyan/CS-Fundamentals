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
        this->next = NULL;
        this->prev = NULL;
    };
};

class DoublyList
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;

    void insert_tail(int val)
    {
        sz++;
        Node *newNode = new Node(val);
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
    void insert_at_position(int pos, int val)
    {
        sz++;
        Node *newNode = new Node(val);
        Node *temp = head;
        int i = 0;
        while (i < pos - 1)
        {
            temp = temp->next;
            i++;
        }

        newNode->next = temp->next;
        temp->next->prev = newNode;
        newNode->prev = temp;
        temp->next = newNode;
    };
    void delete_head()
    {
        sz--;
        Node *temp = head;
        head = head->next;

        if (head == NULL)
        {
            tail = NULL;
        }
        else
        {
            head->prev = NULL;
        };

        delete temp;
    };
    void delete_tail()
    {
        sz--;
        Node *temp = tail;
        tail = tail->prev;
        if (tail == NULL)
        {
            head = NULL;
        }
        else
        {
            tail->next = NULL;
        };
        delete temp;
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
    DoublyList myList;
    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
        {
            break;
        };
        myList.insert_tail(val);
    }
    myList.insert_head(100);
    myList.delete_tail();
    myList.print_list();
    return 0;
}
