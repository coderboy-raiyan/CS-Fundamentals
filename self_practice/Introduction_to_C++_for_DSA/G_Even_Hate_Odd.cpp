# include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    int n;
    int num, even=0, odd=0;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        int size = n;
        while (n--)
        {
           cin >> num;
            if(num % 2 == 0){
                even++;
            }else{
                odd++;
            }
        }
        int mx = max(even, odd);
        if(even == odd){
            cout << 0;
        }else if(size % 2 != 0){
            cout << -1;
        }else {
            cout << mx - (size/2);
        }
        even = 0;
        odd = 0;
        cout << endl;
        
    }
    
    return 0;
}

