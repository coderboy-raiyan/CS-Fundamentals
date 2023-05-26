# include <bits/stdc++.h>

using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    int nums[n];
    for (int i = 0; i < n; i++)
    {
       cin >> nums[i];
    }
    int j = k-1, mn = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if(nums[i] < mn){
            mn = nums[i];
        }
        if(i == j){
            cout << mn << " ";
            mn = INT_MAX;
            j+=k;
        }
        if(k % 2 != 0 && i == n-1){
            cout << mn;
        }
    }
    
    
    return 0;
}

