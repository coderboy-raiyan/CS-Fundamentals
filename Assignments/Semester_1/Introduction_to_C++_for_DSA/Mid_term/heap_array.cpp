# include <bits/stdc++.h>

using namespace std;

int * fun(){
    int * nums = new int[4]{20, 30, 40, 50};
    return nums;
}

int main(){
    int * thatNums = fun();
    for (int i = 0; i < 4; i++)
    {
        cout << thatNums[i] << " ";
    }
    delete[] thatNums;
    thatNums = NULL;
    
    return 0;
}

