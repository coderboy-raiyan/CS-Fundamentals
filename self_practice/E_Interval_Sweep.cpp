# include <bits/stdc++.h>

using namespace std;

int main(){
    int odd, even;
    cin >> odd >> even;
    if(odd == 0 || even == 0){
        printf("NO");
    }else if(abs(odd - even) <= 1){
        printf("YES");
    }else{
        printf("NO");
    }    
    return 0;
}

