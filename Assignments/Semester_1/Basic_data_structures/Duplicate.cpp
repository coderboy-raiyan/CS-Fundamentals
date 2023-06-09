# include <bits/stdc++.h>

using namespace std;

int main(){
    long long int n;
    cin >> n;
    long long int nums[n];
    for (int i = 0; i < n; i++)
    {
       cin >> nums[i];
    }
    bool flag = false;
    for (int i = 0; i < n-1; i++)
    {
       for (int j = i+1; j < n; j++)
       {
         if(nums[i] == nums[j]){
            flag = true;
            break;
         }
       }
       
    }
    if(flag){
        cout << "YES";
    }else{
        cout << "NO";
    }
    
    return 0;
}

