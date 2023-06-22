# include <bits/stdc++.h>

using namespace std;


int main(){
    list<int>nums;
    while (true)
    {
       int num;
       cin >> num;
       if(num == -1){
         break;
       }
       nums.push_back(num);
    }
    nums.sort();
    nums.unique();
    for(int val:nums){
        cout << val << " ";
    }
    return 0;
}

