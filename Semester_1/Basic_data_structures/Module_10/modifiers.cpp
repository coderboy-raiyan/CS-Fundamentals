# include <bits/stdc++.h>

using namespace std;

int main(){
    list<int>myList = {10, 20, 30};
    // myList.push_front(200);
    // myList.push_back(400);
    // myList.pop_front();
    myList.insert(next(myList.begin(), 1), 100);
    auto it = find(myList.begin(), myList.end(), 20);

    if(it == myList.end()){
        cout << "Not found";
    }else{
        cout << *it;
    }

    for(int val : myList){
        cout << val << endl;
    };

    return 0;
}

