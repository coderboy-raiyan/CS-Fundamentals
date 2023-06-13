# include <bits/stdc++.h>

using namespace std;

void fun(int *& pnt){
  *pnt = 20;
};

int main(){
    int val = 10;
    int * pt = &val;
    fun(pt);
    cout << *pt << endl;  
    return 0;
}

