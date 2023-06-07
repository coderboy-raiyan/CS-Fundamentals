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
    int i = 0, j = n-1;
    int temp;
    while (i < j)
    {
        temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
        i++;
        j--;
    }
    for(int num:nums){
        cout << num << " ";
    }
    return 0;
}

