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
    void sort_list()
    {
        Node *i = head;
        while (i->next != NULL)
        {
            Node *j = i->next;
            while (j != NULL)
            {
                if (i->val > j->val)
                {
                    swap(i->val, j->val);
                }
                j = j->next;
            }
            i = i->next;
        }
    };

    void check_duplicates()
    {
        Node *temp = head;
        while (temp->next != NULL)
        {
            if (temp->val == temp->next->val)
            {
                cout << "YES";
                return;
            }
            temp = temp->next;
        }
        cout << "NO";
        return;
    };

    void print_middleNode()
    {
        int mid;
        if (sz % 2 == 0)
        {
            mid = (sz / 2) - 1;
        }
        else
        {
            mid = sz / 2;
        }
        Node *temp = head;
        int i = 0;
        while (i < mid)
        {
            temp = temp->next;
            i++;
        };
        if (sz % 2 == 0)
        {
            cout << temp->val << " " << temp->next->val << endl;
        }
        else
        {
            cout << temp->val << endl;
        }
    };

    void reverse(Node *curr)
    {
        if (curr->next == NULL)
        {
            head = curr;
            return;
        }
        reverse(curr->next);
        curr->next->next = curr;
        curr->next = NULL;
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
    myList.reverse(myList.head);
    myList.printNodes();

    return 0;
}
