# include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int nums[n];
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    sort(nums, nums+n, greater<int>());
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
    
    return 0;
}

