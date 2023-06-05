# include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    cin.ignore();
    vector<string>ch(n);
    for (int i = 0; i < n; i++)
    {
        cin >> ch[i];
    }
    for (int i = 0; i < n; i++)
    {
       cout << ch[i] << endl;
    }
    
    return 0;
}

