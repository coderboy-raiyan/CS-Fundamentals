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

int minimum_num(Node * head){
    if(head->next == NULL){
        return head->val;
    }
    int mn = minimum_num(head->next);
    if(head->val < mn){
        return head->val;
    }else{
        return mn;
    }
};
int maximum_num(Node * head){
    if(head->next == NULL){
        return head->val;
    }
    int mx = maximum_num(head->next);
    if(head->val > mx){
        return head->val;
    }else{
        return mx;
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
    // print_list(head);
    int mn = minimum_num(head);
    int mx = maximum_num(head);
    cout << mx << " " << mn;
    return 0;
}

