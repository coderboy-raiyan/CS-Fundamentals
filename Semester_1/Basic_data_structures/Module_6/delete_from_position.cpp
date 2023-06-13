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

void insetAtHead(Node * &head, int val){
   Node * newNode = new Node(val);
   newNode->next = head;
   head = newNode;
    cout << "head has been inserted" << endl;
};

void insertAtPosition(Node * &head, int val, int pos){
    cout << "Please enter a value and position...";
    Node * newNode = new Node(val);
    Node * temp = head;
    int i = 0;
    while (i < pos-1)
    {
       temp = temp->next;
       if(temp == NULL){
         cout << "Invalid Index" << endl;
         return;
       }
       i++;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}

void delete_from_position(Node * head, int pos){
    Node * temp = head;
    int i = 0;
    while (i < pos-1)
    {
        temp = temp->next;
         if(temp == NULL){
         cout << "Invalid Index" << endl;
         return;
       }
        i++;
    }
     if(temp->next == NULL){
         cout << "Invalid Index" << endl;
         return;
    }
    Node * deleteNode = temp->next;
    temp->next = temp->next->next;
    delete deleteNode;
    cout << "Node has been deleted" << endl;
};
void delete_head(Node * &head, int pos){
     if(head == NULL){
         cout << "Invalid Index" << endl;
         return;
    }
    Node * deleteHead = head;
    head = head->next;
    delete deleteHead;
     cout << "head has been deleted" << endl;
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
    cout << "Option 3: Insert at position" << endl;
    cout << "Option 4: Delete a node from the position" << endl;
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
            int val, pos;
            cout << "Enter a postion :" << endl;
            cin >> pos;
            cout << "Enter a value :" << endl;
            if(pos == 0){
                cin >> val;
                insetAtHead(head, val);
            }else{
                cin >> val;
                insertAtPosition(head, val, pos);
            }
        }
        else if(opt == 4){
            int pos;
            cout << "Enter a position :" << endl;
            cin >> pos;
            if(pos != 0){
                delete_from_position(head, pos);
            }else{
                delete_head(head, pos);
            }
        }
        else if(opt == 0){
            cout << "Good bye.." << endl;
            break;
        }
    }
    
    return 0;
}

