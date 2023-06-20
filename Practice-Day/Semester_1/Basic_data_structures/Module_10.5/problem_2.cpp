# include <bits/stdc++.h>

using namespace std;

class Node {
    public:
    int val;
    Node * next;
    Node * prev;

    Node(int val){
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    };
};

void insert_tail(Node *& head, Node *& tail, int val){
    Node * newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    };
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
};

void print_list(Node * head){
    Node * temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    
};

int size_count(Node * head){
    Node * temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
};

void reverse_list(Node * head, Node * tail){
    Node * i = head;
    Node * j = tail;
    while (i != j && i->next != j)
    {
        swap(i->val, j->val);
        i = i->next;
        j = j->prev;

    }
    if(i->next == j){
        swap(i->val, j->val);
    }
};

int main(){
    Node * head = NULL;
    Node * tail = NULL;

    while (true)
    {
       int num;
       cin >> num;
       if(num == -1){
         break;
       }
       insert_tail(head, tail, num);
    }

    reverse_list(head, tail);

    print_list(head);

    return 0;
}

