# include <bits/stdc++.h>

using namespace std;

int main(){
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        cin >> n;
        int nums[n];
        for (int i = 0; i < n; i++)
        {
            cin >> nums[i];
        }
        bool flag = true;
        for (int i = 0; i < n-1; i++)
        {
           for (int j = i+1; j < n; j++)
           {
             if(nums[i] > nums[j]){
                flag = false;
                break;
             }
           }
           
        }
        if(flag){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
        
    }
    
    return 0;
}

