# include <bits/stdc++.h>

using namespace std;

int main(){
    string ch;
    getline(cin, ch);
    stringstream ss(ch);
    string word;
    while (ss >> word)
    {
        cout << word << endl;
    }
    
    return 0;
}

