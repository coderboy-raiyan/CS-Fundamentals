# include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int a, b;
    
    while (n--)
    {
        cin >> a >> b;
        if(a > b){
            int temp = a;
            a = b;
            b = temp;
        }
       cout << (b * (b + 1)/2) - ((a - 1) * (a - 1 + 1))/2 << "\n";
    }
    
    return 0;
}

