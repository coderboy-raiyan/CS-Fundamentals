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

void reverse(Node * &head, Node * curr){
    if(curr->next == NULL){
        head = curr;
        return;
    }
    reverse(head, curr->next);
    curr->next->next = curr;
    curr->next = NULL;
};

void print_list(Node * head){
    Node * temp = head;

    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    
};

int main(){
    Node * head = new Node(10);
    Node * a = new Node(20);
    Node * b = new Node(30);

    head->next = a;
    a->next = b;
    reverse(head, head);
    print_list(head);

    return 0;
}

