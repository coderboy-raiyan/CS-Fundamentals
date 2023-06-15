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


void print_list(Node * head){
    Node * temp = head;
    while (temp != NULL)
    {
      cout << temp->val << " ";
      temp = temp->next;
    }
};

int size_count(Node * head){
    int count = 0;
    Node * temp = head;

    while (temp != NULL)
    {
       count++;
       temp = temp->next;
    }
    return count;
};

void insert_at_position(Node * head, int val, int pos){
    Node * temp = head;
    Node * newNode = new Node(val);

    int i = 0;
    while (i < pos-1)
    {
        temp = temp->next;
        i++;
    }
    newNode->next = temp->next;
    temp->next = newNode;
};

void insert_head(Node *&head, int val){
    Node * newNode = new Node(val);
    newNode->next = head;
    head = newNode;
};

void insert_tail(Node * &head, Node * &tail, int val){
    Node * newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
};

void delete_node(Node * head, int pos){
    Node * temp = head;
    int i = 0;
    while (i < pos-1)
    {
        temp = temp->next;
    }
    Node * deletedNode = temp->next;
    temp->next = temp->next->next;
    delete deletedNode;
};

void delete_head(Node * &head){
    Node * oldHead = head;
    head = head->next;
    delete oldHead;
}

int main(){
    Node * head = new Node(10);
    Node * a = new Node(20);
    Node * b = new Node(30);
    Node * c = new Node(40);
    Node * d = new Node(50);
    Node * tail = d;

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;

    print_list(head);
    cout << endl;
    int val, pos;
    cin >> pos >> val;
    if(pos == 1){
        delete_node(head, pos);
    }
    print_list(head);
    return 0;
}

