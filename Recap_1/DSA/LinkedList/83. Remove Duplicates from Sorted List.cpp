
class Solution
{
public:
    ListNode *deleteDuplicates(ListNode *head)
    {
        ListNode *temp = head;

        while (temp != NULL && temp->next != NULL)
        {
            if (temp->val == temp->next->val)
            {
                ListNode *delNode = temp->next;
                temp->next = temp->next->next;
                delete delNode;
            };
            if (temp->next == NULL)
            {
                break;
            }
            if (temp->val != temp->next->val)
            {
                temp = temp->next;
            }
        }

        return head;
    }
};