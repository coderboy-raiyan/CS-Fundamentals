# include <bits/stdc++.h>

using namespace std;

class ListNode {
    public :
    int val;
    ListNode * next;
    ListNode(int val){
        this->val = val;
        this->next = NULL;
    }
};

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

void reverse_list(ListNode * &head, ListNode * curr){
   if(curr->next == NULL){
     head = curr;
     return;
   }
   reverse_list(head, curr->next);
   curr->next->next = curr;
   curr->next = NULL;
};

void print_list(ListNode * head){
    ListNode * temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp  = temp->next;
    }
    
};



int main(){
    ListNode * head = NULL;
    ListNode * tail = NULL;

    ListNode * newHead = NULL;
    ListNode * newTail = NULL;
    while (true)
    {
       int num;
       cin >> num;
       if(num == -1){
         break;
       }
        insert_tail(newHead, newTail, num);
        insert_tail(head, tail, num);
    }
    reverse_list(newHead, newHead);
    
    ListNode * temp1 = head;
    ListNode * temp2 = newHead;
    bool flag = true;

    while (temp1 != NULL)
    {
        
        if(temp1->val != temp2->val){
            flag = false;
            break;
        }
        temp1 = temp1->next;
        temp2 = temp2->next;
    }
    
    if(flag){
        cout << "YES";
    }else{
        cout << "NO";
    }

    return 0;
}

