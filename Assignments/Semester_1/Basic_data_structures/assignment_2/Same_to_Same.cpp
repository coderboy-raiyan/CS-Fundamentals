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

int main(){
    Node * head1 = NULL;
    Node * tail1 = NULL;  

    Node * head2 = NULL;
    Node * tail2 = NULL;  



    while (true)
    {
       int num;
       cin >> num;
       if(num == -1){
         break;
       }
       insert_tail(head1, tail1, num);
    }
    while (true)
    {
       int num;
       cin >> num;
       if(num == -1){
         break;
       }
       insert_tail(head2, tail2, num);
    }
    
    int size1 = size_count(head1);
    int size2 = size_count(head2);

    if(size1 != size2){
        cout << "NO";
        return 0;
    }
    
    Node * temp1 = head1;
    Node * temp2 = head2;
    bool flag = true;
    while (true)
    {
        if(temp1 == NULL || temp2 == NULL){
            break;
        };
        if(temp1->val != temp2->val){
            flag = false;
            break;
            
        }
        temp1 = temp1->next;
        temp2 = temp2->next;
    }
    
    if(flag){
        cout << "YES";
    }else{
        cout << "NO";
    }

    return 0;
}

