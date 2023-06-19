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



int main(){
    Node * head = new Node(78);
    Node * a  = new Node(200);
    Node * b = new Node(500);

    Node * tail = b;


    head->next = a;
    a->prev = head;
    a->next = b;
    b->prev = a;
    // insert_position(head, 1, 600);
    insert_head(head, tail, 800);
    insert_tail(head, tail, 1200);
    print_list(head);
    cout << endl;
    print_reverse(tail);

    return 0;
}

