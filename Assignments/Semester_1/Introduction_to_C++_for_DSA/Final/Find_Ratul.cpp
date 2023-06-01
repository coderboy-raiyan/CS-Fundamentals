# include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    getline(cin, s);
    stringstream ss(s);
    string word;
    bool find = false;
    while (ss >> word)
    {
        if(word == "Ratul"){
            find = true;
        }
    }
    if(find){
        cout << "YES";
    }else{
        cout << "NO";
    }
    return 0;
}

