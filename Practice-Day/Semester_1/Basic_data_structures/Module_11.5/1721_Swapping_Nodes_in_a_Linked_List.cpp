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
    int size_count(ListNode *head)
    {
        ListNode *temp = head;
        int cnt = 1;
        while (temp != NULL)
        {
            cnt++;
            temp = temp->next;
        };
        return cnt;
    };
    ListNode *swapNodes(ListNode *head, int k)
    {
        ListNode *temp1 = head;
        ListNode *temp2 = head;
        int last = size_count(head) - k;
        int i = 1;
        while (i < k)
        {
            temp1 = temp1->next;
            i++;
        }
        int j = 1;
        while (j < last)
        {
            temp2 = temp2->next;
            j++;
        }
        swap(temp1->val, temp2->val);
        cout << temp1->val;
        return head;
    }
};