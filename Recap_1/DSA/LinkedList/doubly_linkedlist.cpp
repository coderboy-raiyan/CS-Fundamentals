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
        sz++;
        Node *newNode = new Node(val);
        Node *lead = findNode(pos);
        newNode->next = lead->next;
        lead->next->prev = newNode;
        newNode->prev = lead;
        lead->next = newNode;
    };

    void delete_head()
    {
        sz--;
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
        sz--;
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

        swap(i->val, j->val);
    }

    void delete_node(int pos)
    {
        if (pos == 0)
        {
            delete_head();
            return;
        };
        if (pos == sz)
        {
            delete_tail();
            return;
        };
        Node *lead = findNode(pos);
        Node *del = lead->next;
        lead->next = lead->next->next;
        lead->next->prev = lead;
        delete del;
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
    DoublyLinkedList dl;
    while (true)
    {
        int n;
        cin >> n;
        if (n != -1)
        {
            dl.insert_tail(n);
        }
        else
        {
            break;
        }
    }
    dl.reverse_list();
    dl.print_list();
    return 0;
}
