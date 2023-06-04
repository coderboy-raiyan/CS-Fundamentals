# include <bits/stdc++.h>

using namespace std;

long long int countSqr(long long int val, long long int sqr){
   if(sqr == 0){
      return val;
   }
   return countSqr(val, sqr - 1) * val;
};

int main(){
    long long int x, n;
    cin >> x >> n;
    long long int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if(i != 0 && i % 2){
            sum+=countSqr(x,i);
        };
    }
    cout << sum;
    return 0;
}

