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

int main(){
    Node * head = new Node(10);
    Node * b = new Node(20);
    head->next = b;
    cout << head->next->val;
    return 0;
}

