# include <bits/stdc++.h>

using namespace std;

int main(){
    int n, q;
    cin >> n >> q;
    vector<long long int>nums(n);
    for (long long int i = 0; i < n; i++)
    {
       cin >> nums[i];
    }
    long long int sum = 0;
    vector<long long int>prefix_sum(n);
    prefix_sum[0] = nums[0];
    for (int i = 1; i < n; i++)
    {
        prefix_sum[i] = nums[i] + prefix_sum[i - 1];
    }
    while (q--)
    {
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        if(a == 0){
            cout << prefix_sum[b] << endl;
        }else{
            cout << prefix_sum[b] - prefix_sum[a-1] << endl;
        }
    }
    
    return 0;
}

