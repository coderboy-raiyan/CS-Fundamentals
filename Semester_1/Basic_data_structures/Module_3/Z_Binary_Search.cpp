# include <bits/stdc++.h>

using namespace std;

int main(){
    long long int n, q;
    cin >> n >> q;
    vector<long long int>nums(n);
    for (long long int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    sort(nums.begin(), nums.end());
    
    while (q--)
    {
       long long int target;
       cin >> target;
       long long int l = 0;
       long long int r = n-1;
        bool flag = false;
        while (l <= r)
        {
            long long int mid = (l+r)/2;
            if(nums[mid] == target){
                flag = true;
                break;
            }
            if(target > nums[mid]){
                l = mid+1;
            }else{
                r = mid-1;
            }
        }
        if(flag){
            cout << "found" << endl;
        }else{
            cout << "not found" << endl;
        }
        l = 0;
        r = n-1;
    }
    

    return 0;
}

