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

void reverse_print(Node * head){
    Node * temp = head;
    if(temp->next == NULL){
        return;
    }
    reverse_print(temp->next);
    cout << temp->val << " ";
}

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
    reverse_print(head);

    return 0;
}

