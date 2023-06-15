# include <bits/stdc++.h>

using namespace std;

class Node{
  public :
  int val;
  Node * next;

  Node(int val){
    this->val = val;
    this->next = NULL;
  };
};

void insert_tail(Node *&head, Node *&tail, int val){
    Node * newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
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

void sort_list(Node * head){
    Node * i = head;

    while (i->next != NULL)
    {
        Node * j = i->next;
        while (j != NULL)
        {
           if(i->val < j->val){
                swap(i->val, j->val);
           }
           j = j->next;
        }
        i = i->next;
    }
    
};

void mid_num(Node * head){
    int size = size_count(head);
    int mid = (size + 1)/2;
    Node * temp = head;
    int i = 0;
    while (i < mid - 1)
    {
       temp = temp->next;
       i++;
    }
    if(size % 2 == 0){
        cout << temp->val << " " << temp->next->val; 
    }else{
        cout << temp->val;
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
    sort_list(head);

    mid_num(head);

    // print_list(head);

    return 0;
}

