# include <bits/stdc++.h>

using namespace std;

int main(){
    list<int>head;
    while (true)
    {
        int num;
        cin >> num;
        if(num == -1){
            break;
        }
      head.push_back(num);
    }
    head.sort();
    for(int val:head){
        cout << val << " ";
    }
    return 0;
}

