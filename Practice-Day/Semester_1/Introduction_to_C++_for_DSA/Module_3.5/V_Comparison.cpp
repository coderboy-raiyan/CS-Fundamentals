# include <bits/stdc++.h>

using namespace std;

int main(){
    int a, b;
    char s;
    cin >> a >> s >> b;
    if(s == 60 && a < b){
        cout << "Right";
    }else if(s == 61 && a == b){
        cout << "Right";
    }
    else if(s == 62 && a > b){
        cout << "Right";
    }
    else{
        cout << "Wrong";
    }

    return 0;
}

