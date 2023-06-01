# include <bits/stdc++.h>

using namespace std;

int main(){
    string  ch;
    getline(cin, ch);
    stringstream ss;
    ss << ch;
    string * word = new string;

    ss >> *word;
    reverse((*word).begin(), (*word).end());
    cout << *word;
    while(ss >> *word){
        reverse((*word).begin(), (*word).end());
        cout << " " << *word;
    }
    delete word;
    return 0;
}

