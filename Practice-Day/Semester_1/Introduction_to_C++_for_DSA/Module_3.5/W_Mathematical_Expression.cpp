# include <bits/stdc++.h>

using namespace std;

int main(){
    int a, b, c;
    char s, Q; 
    int ans;
    cin >> a >> s >> b >> Q >> c;
    if(s == '+' && a + b == c){
        cout << "Yes";
    }else if(s == '-' && a - b == c){
        cout << "Yes";
    }else if(s == '*' && a * b == c){
        cout << "Yes";
    }else{
        if(s == '+'){
            cout << a + b;
        }else if(s == '-'){
            cout << a - b;
        }else{
            cout << a * b;
        }
    }
    return 0;
}

