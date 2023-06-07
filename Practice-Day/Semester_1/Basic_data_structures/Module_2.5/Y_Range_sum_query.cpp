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
    while (q--)
    {
        int a, b;
        cin >> a >> b;
        if(a > b){
            int temp;
            temp = b;
            b = a;
            a = temp;
        }
        for (int i = a-1; i <= b-1; i++)
        {
            sum+=nums[i];
        }
        cout << sum << endl;
        sum = 0;
    }
    
    return 0;
}

