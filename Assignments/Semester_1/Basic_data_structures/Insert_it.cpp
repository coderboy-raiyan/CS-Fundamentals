# include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int>nums1(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums1[i];
    }
    int m;
    cin >> m;
    vector<int>nums2(m);
    for (int i = 0; i < m; i++)
    {
        cin >> nums2[i];
    }
    int x;
    cin >> x;
    nums1.insert(nums1.begin()+x, nums2.begin(), nums2.end());
    for (int i = 0; i < n+m; i++)
    {
        cout << nums1[i] << " ";
    }
    
    return 0;
}

