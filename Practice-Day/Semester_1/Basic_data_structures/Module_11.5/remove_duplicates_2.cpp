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

void insert_tail(ListNode *&head, ListNode *&tail, int val)
{
    ListNode *newNode = new ListNode(val);

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;
};

void print_list(ListNode *head)
{
    ListNode *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
};

void sort_list(ListNode *head)
{
    ListNode *i = head;
    while (i->next != NULL)
    {
        ListNode *j = i->next;
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

void remove_duplicates(ListNode *head)
{
    sort_list(head);
    ListNode *temp = head;
    while (temp != NULL)
    {
        while (temp->next != NULL && temp->val == temp->next->val)
        {
            temp->next = temp->next->next;
        }

        temp = temp->next;
    }
};

int main()
{
    ListNode *head = NULL;
    ListNode *tail = NULL;
    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_tail(head, tail, val);
    }
    remove_duplicates(head);
    print_list(head);

    return 0;
}
