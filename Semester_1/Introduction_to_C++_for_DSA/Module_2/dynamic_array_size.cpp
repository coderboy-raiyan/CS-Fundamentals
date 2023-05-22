# include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int * nums = new int[n];
    for (int i = 0; i < n; i++)
    {
       cin >> nums[i];
    }
    int m;
    cin >> m;
    int * nums2 = new int[m+n];
    for (int i = 0; i < n; i++)
    {
       nums2[i] = nums[i];
    }
    for (int i = n; i < m+n; i++)
    {
        cin >> nums2[i];
    }
    for (int i = 0; i < m+n; i++)
    {
        cout << nums2[i] << "\n";
    }
    delete[] nums;
    
    
    return 0;
}

