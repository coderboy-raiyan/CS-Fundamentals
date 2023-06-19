# include <bits/stdc++.h>

using namespace std;

bool cpm(int a , int b){
    return a > b;
};

int main(){
    list<int>myList = {10 , 30 , 40 , 50};
    myList.sort(cpm);
    for(int val : myList){
        cout << val << endl;
    }
    return 0;
}

