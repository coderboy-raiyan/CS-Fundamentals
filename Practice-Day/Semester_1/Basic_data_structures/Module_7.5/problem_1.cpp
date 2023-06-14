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

void print_list(Node * head){
    Node * temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    
};

int main(){
    Node * head1 = NULL;
    Node * head1_tail = NULL;

    Node * head2 = NULL;
    Node * head2_tail = NULL;

    while (true)
    {
        int num;
        cin >> num;
       if(num == -1){
         break;
       }
       insert_tail(head1, head1_tail, num);
    }
    
    while (true)
    {
        int num;
        cin >> num;
       if(num == -1){
         break;
       }
       insert_tail(head2, head2_tail, num);
    }
   
    int size1 = size_count(head1);
    int size2 = size_count(head2);

    if(size1 != size2){
        cout << "NO";
        return 0;
    }
    Node * temp = head1;
    Node * temp2 = head2;

    bool flag = false;

    while (temp != NULL && temp2 != NULL)
    {
       if(temp->val == temp2->val){
        flag = true;
        break;
       }
       temp2 = temp2->next;
       temp = temp->next;
    }
    if(flag){
        cout << "YES";
    }else{
        cout << "NO";
    }

    return 0;
}

