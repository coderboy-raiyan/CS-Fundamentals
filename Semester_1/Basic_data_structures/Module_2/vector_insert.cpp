# include <bits/stdc++.h>

using namespace std;

int main(){
    vector<int>v = {1, 2, 4};
    v.insert(v.begin()+2, 5);
    vector<int>v2= {10, 30 , 40};
    v.insert(v.begin()+2, v2.begin(), v2.end());
    for (int c : v)
    {
    cout << c << endl;
        /* code */
    }
    
    return 0;
}

