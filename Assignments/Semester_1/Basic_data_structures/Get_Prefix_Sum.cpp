# include <bits/stdc++.h>

using namespace std;

int main(){
    long long int n;
    cin >> n;
    vector<long long int>nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    vector<long long int>nums2(n);
    nums2[0] = nums[0];
    for (int i = 1; i < n; i++)
    {
       nums2[i] = nums[i] + nums2[i - 1];
    }
    reverse(nums2.begin(), nums2.end());
    for (int i = 0; i < n; i++)
    {
       cout << nums2[i] << " ";
    }
    
    return 0;
}

