# include <bits/stdc++.h>

using namespace std;

class ListNode {
    public :
    int val;
    ListNode * next;
    ListNode * prev;
    ListNode(int val){
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
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
    newNode->prev = tail;
    tail = newNode;
};

void insert_head(ListNode *&head, ListNode *&tail, int val){
    ListNode * newNode = new ListNode(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
};

void insert_at_position(ListNode * head, int val, int pos){
    ListNode * newNode = new ListNode(val);
    ListNode * temp = head;
    int i = 0;
    while (i < pos - 1)
    {
        temp = temp->next;
        i++;
    }
    newNode->next = temp->next;
    temp->next = newNode;
    newNode->prev = temp;
    newNode->next->prev = newNode;
};

void print_list(ListNode * head){
    ListNode * temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp  = temp->next;
    }
    
};

void reverse_print(ListNode * tail){
    ListNode * temp = tail;
    while (temp != NULL)
    {
       cout << temp->val << " ";
       temp = temp->prev;
    }
    
};

int size_count(ListNode * head){
    int count = 0;
    ListNode * temp = head;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
};


int main(){
    ListNode * head = NULL;
    ListNode * tail = NULL;
   
    int n;
    cin >> n;

    while (n--)
    {
        int x, v;
        cin >> x >> v;
        if(x == 0){
            insert_head(head, tail, v);
            cout << "L -> ";
            print_list(head);
            cout << endl;
    
            cout << "R -> ";
            reverse_print(tail);
            cout << endl;
        }else if(x == size_count(head)){
            insert_tail(head, tail, v);
            cout << "L -> ";
            print_list(head);
            cout << endl;
    
            cout << "R -> ";
            reverse_print(tail);
            cout << endl;
        }else if(x > size_count(head)){
            cout << "Invalid" << endl;
        }
        else{
            insert_at_position(head, v, x);
            cout << "L -> ";
            print_list(head);
            cout << endl;
    
            cout << "R -> ";
            reverse_print(tail);
            cout << endl;
        }

    }

    return 0;
}

