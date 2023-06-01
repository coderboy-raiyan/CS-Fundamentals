# include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    while (n--)
    {
        string s;
        string x;
        cin >> s >> x;
        int res = s.find(x);
        while (res != -1)
        {
           s.replace(res, x.size(), "$");
           res = s.find(x);
        }
        
        cout << s << endl;
    }
    
    return 0;
}

