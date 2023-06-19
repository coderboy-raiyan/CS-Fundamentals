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


int main(){
    Node * head = new Node(10);
    Node * a  = new Node(20);
    Node * b = new Node(50);
    Node * c = new Node(60);

    Node * tail = c;


    head->next = a;
    a->next = b;
    b->next = c;
    c->next = head;
  
    Node * fast = head;
    Node * slow = head;
    bool flag = false;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if(fast == slow){
            flag = true;
            break;
        }
    }
    if(flag){
        cout << "Cycle detected";
    }else{
        cout << "No cycle found";
    }

    return 0;
}

