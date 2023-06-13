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

void insert_node_tail(Node * &head, int val) {
    
    Node * newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        return;
    }
    Node * temp = head;
    while (temp->next != NULL)
    {
       temp = temp->next;
    }
    temp->next = newNode;
}; 

void printList(Node * head){
 cout << "Your Linked list : ";
  Node * temp = head;
  while (temp != NULL)
  {
    cout << temp->val << " ";
    temp = temp->next;
  }
  
}

int main(){
    Node * head = NULL;
    int num;
    while (true)
    {
        cin >> num;
        if(num == -1){
            break;
        }
        insert_node_tail(head,num);
    }
    printList(head);
    return 0;
}

