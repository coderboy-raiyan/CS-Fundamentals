# include <bits/stdc++.h>

using namespace std;

int main(){
    string ch = "my name is hello";
    ch.resize(20, 'd');
    cout << ch;
    cout << ch.size() <<endl << ch.capacity();
    return 0;
}

