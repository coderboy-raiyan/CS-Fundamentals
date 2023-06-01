# include <bits/stdc++.h>

using namespace std;

int main(){
    string str;
    cin >> str;
    int res = str.find("EGYPT");
    while (res != -1)
    {
        str.replace(res, 5, " ");
        res = str.find("EGYPT");
    }
    cout << str;
}

