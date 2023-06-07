# include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int>nums(n);
    for (int i = 0; i < n; i++)
    {
       cin >> nums[i];
    }
    for (int i = 0; i < n; i++)
    {
       if(nums[i] > 0){
             replace(nums.begin(), nums.end(), nums[i], 1);
       }
       if(nums[i] < 0){
            replace(nums.begin(), nums.end(), nums[i], 2);
       }
    }
    for(int num:nums){
        cout << num << " ";
    }

    return 0;
}

