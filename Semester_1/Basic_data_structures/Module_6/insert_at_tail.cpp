# include <bits/stdc++.h>

using namespace std;

class Node {
    public :
    int val;
    Node * next;

    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};

void insertNode(Node * &head, int val) {
    
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
 cout << "Printing all nodes..." << endl;
  Node * temp = head;
  while (temp != NULL)
  {
    cout << temp->val << endl;
    temp = temp->next;
  }
  
}   

int main(){
    Node * head = NULL;
    cout << "Option 1: insert node" << endl;
    cout << "Option 2: print List" << endl;
    cout << "Option 3: done" << endl;
    while (true)
    {
        int opt;
        cin >> opt;
        if(opt == 1){
            cout << "Please enter a value to add a node" << endl;
            int val;
            cin >> val;
            insertNode(head, val);
        }else if(opt == 2){
            printList(head);
        }else if(opt == 3){
            cout << "Good bye.." << endl;
            break;
        }
    }
    
    return 0;
}

