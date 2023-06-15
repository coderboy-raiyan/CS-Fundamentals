# include <bits/stdc++.h>

using namespace std;

class Node{
  public :
  long long int val;
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

int size_count(Node * head){
    Node * temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
};

void reverse_list(Node * head){
    if(head == NULL){
        return;
    }
    reverse_list(head->next);
    cout << head->val << " ";
};


int main(){
    Node * head = NULL;
    Node * tail = NULL;  

    while (true)
    {
       long long int num;
       cin >> num;
       if(num == -1){
         break;
       }
       insert_tail(head, tail, num);
    }

    reverse_list(head);
   cout << endl;
    print_list(head);

    return 0;
}

