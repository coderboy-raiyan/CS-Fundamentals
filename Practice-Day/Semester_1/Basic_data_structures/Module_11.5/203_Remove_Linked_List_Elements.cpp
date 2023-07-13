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
    ListNode *removeElements(ListNode *head, int val)
    {
        if (head == NULL || head->next == NULL)
        {
            if (head != NULL && head->val == val)
            {
                head = head->next;
            }
            return head;
        }
        while (head != NULL && head->val == val)
        {
            head = head->next;
        }
        ListNode *temp = head;
        while (temp != NULL && temp->next != NULL)
        {
            if (temp->next->val == val)
            {
                temp->next = temp->next->next;
            }
            if (temp->next == NULL)
            {
                break;
            }
            if (temp->next->val != val)
            {
                temp = temp->next;
            }
        }
        return head;
    }
};