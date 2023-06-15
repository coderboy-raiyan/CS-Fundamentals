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

void insert_tail(Node * &head, Node *& tail, int val){
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

void sort_list(Node * head){
    Node * i = head;
    // Method - 1
    while (i->next != NULL)
    {
     Node * j = i->next;
        while (j != NULL)
        {
            if(i->val > j->val){
                swap(i->val, j->val);
            }
            j = j->next;
        }
      i = i->next;
    }
    // method - 2
    for (Node * i = head; i->next != NULL; i = i->next)
    {
       for (Node * j = i->next; j != NULL; j = j->next)
       {
        if(i->val > j->val){
            swap(i->val, j->val);
        }
       }
       
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
    print_list(head);

    return 0;
}

