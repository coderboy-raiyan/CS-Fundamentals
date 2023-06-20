# include <bits/stdc++.h>

using namespace std;

class Node {
    public:
    int val;
    Node * next;
    Node * prev;

    Node(int val){
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    };
};


void insert_head(Node *&head, Node *& tail, int val){
    Node * newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    };
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
};

void insert_tail(Node *&head, Node *& tail, int val){
    Node * newNode = new Node(val);
    if(tail == NULL){
        head = newNode;
        tail = newNode;
        return;
    };
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
};

void insert_at_position(Node *& head, Node *& tail, int val, int pos){
    Node * newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    };
    Node * temp = head;
    int i = 0;

    while (i < pos-1)
    {
        temp = temp->next;
        i++;
    }
    newNode->next = temp->next;
    temp->next = newNode;
    newNode->next->prev = newNode;
    newNode->prev = temp;
};

void print_list(Node * head){
    Node * temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    
};
void reverse_print_list(Node * head){
   if(head == NULL){
     return;
   }
   reverse_print_list(head->next);
   cout << head->val << " ";
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
    Node * head = NULL;
    Node * tail = NULL;
    
    int n;
    cin >> n;

    while (n--)
    {
      int x, val;
      cin >> x >> val;
      int leng = size_count(head);
      if(x == 0){
        insert_head(head, tail, val);
        print_list(head);
        cout << endl;
        reverse_print_list(head);
        cout << endl;
      }else if(x == leng){
        insert_tail(head, tail, val);
        print_list(head);
        cout << endl;
        reverse_print_list(head);
        cout << endl;
      }
      else if(x > leng){
        cout << "Invalid" << endl;
      }
      else{
        insert_at_position(head, tail, val, x);
        print_list(head);
        cout << endl;
        reverse_print_list(head);
        cout << endl;
      }
   
    }
    
    

    return 0;
}

