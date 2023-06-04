# include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    while (n--)
    {
       int m;
       cin >> m;
       int even = 0, odd = 0;
       int i = 0;
       while (i < m)
       {
         int num;
         cin >> num;
         if(num % 2 == 0){
            even++;
         }else{
            odd++;
         }
         i++;
       }
       int mx;
       if(even > odd){
         mx = even;
       }else{
         mx = odd;
       }

       if(even == odd) {
         cout << 0 << endl;
       }else if(m % 2 != 0){
         cout << -1 << endl;
       }else{
         cout << mx-(m / 2) << endl;
       }
    }
    
    return 0;
}

