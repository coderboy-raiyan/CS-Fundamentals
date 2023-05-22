# include <bits/stdc++.h>

using namespace std;

int * fun(){
    int * nums = new int[4];
    for (int i = 0; i < 4; i++)
    {
        cin >> nums[i];
    }
    
    return nums;
}

int main(){
    int * nums = fun();
    for (int i = 0; i < 4; i++)
    {
       cout << nums[i] << "\n";
    }
    
    return 0;
}

