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
    sort(nums.begin(), nums.end());
    int count = 0;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if(nums[i]+1 == nums[j]){
                count++;
                break;
            }
        }
        
    }
    cout << count;
    return 0;
}

