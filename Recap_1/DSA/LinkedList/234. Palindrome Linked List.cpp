/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    void insert_tail(ListNode *&head, ListNode *&tail, int val)
    {
        ListNode *newNode = new ListNode(val);
        if (tail == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        };
        tail->next = newNode;
        tail = newNode;
    };

    void reverse_list(ListNode *&head, ListNode *curr)
    {
        if (curr->next == NULL)
        {
            head = curr;
            return;
        };
        reverse_list(head, curr->next);
        curr->next->next = curr;
        curr->next = NULL;
    };

    bool isPalindrome(ListNode *head)
    {
        ListNode *head2 = NULL;
        ListNode *tail2 = NULL;

        ListNode *temp = head;
        while (temp != NULL)
        {
            insert_tail(head2, tail2, temp->val);
            temp = temp->next;
        };
        reverse_list(head2, head2);

        ListNode *temp1 = head;
        ListNode *temp2 = head2;
        while (temp2 != NULL)
        {
            if (temp1->val != temp2->val)
            {
                return false;
            };
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        return true;
    }
};