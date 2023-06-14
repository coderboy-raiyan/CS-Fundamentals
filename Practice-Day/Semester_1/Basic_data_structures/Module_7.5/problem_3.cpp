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
    int count = 0;

    Node * temp = head;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
};

void middle_print(Node * head){
    int leng = size_count(head);
    int mid = (leng+1)/2;
    int i = 0;
    Node * temp = head;
    while (i < mid - 1)
    {
        temp = temp->next;
        i++;
    }
    if(leng % 2 == 0){
        cout << temp->val << " " << temp->next->val;
    }else{
        cout << temp->val;
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
    middle_print(head);


    return 0;
}

