# include <bits/stdc++.h>

using namespace std;

class ListNode {
    public :
    int val;
    ListNode * next;
    ListNode(int val){
        this->val  = val;
        this->next = NULL;
    };
};

void insert_tail(ListNode * &head, ListNode *& tail, int val){
    ListNode * newNode = new ListNode(val);

    if(head == NULL){
        head =  newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;
};

void print_list(ListNode * head){
    ListNode * temp = head;
    while (temp != NULL)
    {
       cout << temp->val << " ";
       temp = temp->next;
    }
    
};

int main(){
    ListNode * head = NULL;
    ListNode * tail = NULL;
    while (true)
    {
       int val;
       cin >> val;
       if(val == -1){
         break;
       }
       insert_tail(head, tail, val);
    }
    
    return 0;
}

