# include <bits/stdc++.h>

using namespace std;

void fun(int * &num){
    int * newNum = new int;
    *newNum = 10;
    num = newNum;
};
int main(){
    int * num = NULL;
    fun(num);
    cout << *num;
    return 0;
}

