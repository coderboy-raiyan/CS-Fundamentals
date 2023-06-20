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

void insert_tail(Node *& head, Node *& tail, int val){
    Node * newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    };
    tail->next = newNode;
    newNode->prev = tail;
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

bool is_palindrome(Node * head, Node * tail){
    Node * i = head;
    Node * j = tail;
    bool flag = true;

    while (i != j && i->next != j)
    {
        if(i->val != j->val){
            flag = false;
            break;
        }
        i = i->next;
        j = j->prev;
    }
    if(i->next == j){
        if(i->val != j->val){
            flag = false;
        }
    }
    return flag;
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

    bool isPal = is_palindrome(head, tail);
    if(isPal){
        cout << "YES";
    }else{
        cout << "NO";
    }
    // print_list(head);

    return 0;
}

