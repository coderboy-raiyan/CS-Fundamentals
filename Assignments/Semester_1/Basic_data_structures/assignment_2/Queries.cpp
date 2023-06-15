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

void insert_head(Node *&head, Node*&tail, int val){
    Node * newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head = newNode;
};

int main(){
    Node * head = NULL;
    Node * tail = NULL;  

    int n;
    cin >> n;
    while (n--)
    {
        int x, num;
        cin >> x >> num;
        if(x == 0){
            insert_head(head, tail, num);
        }else{
            insert_tail(head, tail, num);
        }
       cout << head->val << " " << tail->val << endl;
    }

    return 0;
}

