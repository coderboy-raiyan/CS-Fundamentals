# include <bits/stdc++.h>

using namespace std;

int main(){
    vector<int>v={1,2,3};
    vector<int>v2(v);
    vector<int>v3(3, 10);
    for (int i = 0; i < 3; i++)
    {
        cout << v3[i] << " ";
    }
    
    return 0;
}

