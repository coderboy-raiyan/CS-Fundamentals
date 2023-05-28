# include <bits/stdc++.h>

using namespace std;

int * fun(){
    int * arr = new int[4]{300, 450, 670, 89};
    return arr;
}

int main(){
    int * nums = new int[5]{1, 2, 3, 4 ,5};
    int  * array = fun();
    sort(array, array+4, greater<int>());
    for (int i = 0; i < 4; i++)
    {
       cout << array[i] << endl;
    }
    return 0;
}

