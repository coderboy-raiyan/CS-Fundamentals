# include <bits/stdc++.h>

using namespace std;

int main(){
    vector<int>v = {1, 3, 45};
    auto it = find(v.begin(), v.end(), 100);
    
    cout << *it;
    return 0;
}

