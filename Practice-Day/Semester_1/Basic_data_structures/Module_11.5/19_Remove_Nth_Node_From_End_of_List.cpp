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
    void reverse_list(ListNode *&head, ListNode *curr)
    {
        if (curr->next == NULL)
        {
            head = curr;
            return;
        }
        reverse_list(head, curr->next);
        curr->next->next = curr;
        curr->next = NULL;
    };
    void print_list(ListNode *head)
    {
        ListNode *temp = head;
        while (temp != NULL)
        {
            cout << temp->val << " ";
            temp = temp->next;
        };
    };
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        if (head == NULL || head->next == NULL)
        {
            head = NULL;
            return head;
        }
        reverse_list(head, head);
        if (n == 1)
        {
            head = head->next;
            reverse_list(head, head);
            return head;
        }
        int i = 1;
        ListNode *temp = head;
        while (i < n - 1)
        {
            temp = temp->next;
            i++;
        }
        temp->next = temp->next->next;
        reverse_list(head, head);
        return head;
    }
};