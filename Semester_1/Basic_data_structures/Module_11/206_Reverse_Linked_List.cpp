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
class Solution {
public:
    void reverse(ListNode *& head, ListNode * curr){
        if(curr->next == NULL){
            head = curr;
            return;
        }
        reverse(head, curr->next);
        curr->next->next = curr;
        curr->next = NULL;
    };
    ListNode* reverseList(ListNode* head) {
        if(head == NULL){
            return head;
        }
        reverse(head, head);
        return head;
    }
};