# include <bits/stdc++.h>

using namespace std;

void fun(stringstream & ch){
    string word;
    if(ch >> word){ //base case
        fun(ch);
        cout << word << endl;
    }
    // task finished auto return
};  

int main(){
    string ch;
    getline(cin , ch);
    stringstream ss(ch);
    fun(ss);
    return 0;
}

