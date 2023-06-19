# include <bits/stdc++.h>

using namespace std;

class Node{
  public :
  int val;
  Node * prev;
  Node * next;

  Node(int val){
    this->val = val;
    this->next = NULL;
    this->prev = NULL;
  };
};


void insert_position(Node * head, int pos, int val){
  Node * newNode = new Node(val);
  Node * temp = head;
  int i = 0;
  while (i < pos - 1)
  {
    temp = temp->next;
  };
  // newNode->next = temp->next;
  // newNode->prev = temp;
  // temp->next->prev = newNode;
  // temp->next = newNode;

  newNode->next = temp->next;
  temp->next = newNode;
  newNode->next->prev = newNode;
  newNode->prev = temp;

  
};

void insert_head(Node * &head, Node *&tail, int val){
    Node * newNode = new Node(val);
     if(head == NULL){
      head = newNode;
      tail = newNode;
  }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
};

void insert_tail(Node * head, Node * &tail, int val){
  Node * newNode = new Node(val);
  if(head == NULL){
      head = newNode;
      tail = newNode;
  }
  newNode->prev = tail;
  tail->next = newNode;
  tail = newNode;
};

void print_reverse(Node * tail){
    Node *temp = tail;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp =  temp->prev;
    }
    
};

void print_list(Node * head){
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp =  temp->next;
    }
    
};

void reverse(Node * head, Node * tail){
    Node * i = head;
    Node * j = tail;

    while (i != j && i->next != j)
    {
       swap(i->val, j->val);
       i = i->next;
        j = j->prev;
    }
      swap(i->val, j->val);
   
    
}


int main(){
    Node * head = new Node(10);
    Node * a  = new Node(20);
    Node * b = new Node(30);
    Node * d = new Node(40);

    Node * tail = d;


    head->next = a;
    a->prev = head;
    a->next = b;
    b->prev = a;
    b->next = d;
    d->prev = b;
   reverse(head, tail);
   print_list(head);

    return 0;
}

