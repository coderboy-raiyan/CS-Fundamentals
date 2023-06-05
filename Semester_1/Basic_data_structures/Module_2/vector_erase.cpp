# include <bits/stdc++.h>

using namespace std;

int main(){
    vector<int>v = {10, 20, 40};
    v.erase(v.begin(), v.begin()+2);
    for(int c:v){
        cout << c << " ";
    }
    return 0;
}

