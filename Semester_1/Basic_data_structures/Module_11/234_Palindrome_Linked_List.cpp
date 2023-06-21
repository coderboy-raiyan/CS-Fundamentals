class Solution {
public:
    void insert_tail(ListNode *&head, ListNode *&tail, int val){
        ListNode * newNode = new ListNode(val);
        if(head == NULL){
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = newNode;
    };

    void reverse(ListNode *& head, ListNode * curr){
        if(curr->next == NULL){
            head = curr;
            return;
        }
        reverse(head, curr->next);
        curr->next->next = curr;
        curr->next = NULL;
    }

    void print_list(ListNode * head){
        ListNode * temp = head;
        while(temp != NULL){
            cout << temp->val << " ";
            temp = temp->next;
        }
    };

    bool isPalindrome(ListNode* head) {
        if(head == NULL){
            return false;
        }
        ListNode * newHead = NULL;
        ListNode * newTail = NULL;
        ListNode * temp = head;

        while(temp != NULL){
            insert_tail(newHead, newTail, temp->val);
            temp = temp->next;
        };
        reverse(newHead, newHead);
        temp = head;
        ListNode * temp2 = newHead;

        while(temp != NULL){
            if(temp->val != temp2->val){
                return false;
            }
            temp = temp->next;
            temp2 = temp2->next;
        }

        return true;
    }
};