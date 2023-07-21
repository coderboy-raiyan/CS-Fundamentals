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

class SinglyList
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
        }
        tail->next = newNode;
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
        }
        newNode->next = head;
        head = newNode;
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
        delete temp;
    }
    void delete_tail()
    {
        Node *temp = head;
        if (temp->next == NULL)
        {
            head = NULL;
            tail = NULL;
            return;
        }
        while (temp != NULL && temp->next->next != NULL)
        {
            temp = temp->next;
        };
        Node *deleteNode = tail;
        temp->next = NULL;
        tail = temp;
        delete deleteNode;
    };
    void printNodes()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->val << " ";
            temp = temp->next;
        }
    }
};

int main()
{
    SinglyList myList;
    while (true)
    {
        int val;
        cin >> val;

        if (val == -1)
        {
            break;
        }
        myList.insert_tail(val);
    }
    // myList.insert_head(200);
    // myList.delete_head();
    // myList.delete_tail();
    myList.printNodes();

    return 0;
}
