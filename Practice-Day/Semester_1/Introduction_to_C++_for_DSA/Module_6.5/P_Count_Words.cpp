# include <bits/stdc++.h>

using namespace std;

int main(){
    string sh;
    getline(cin, sh);
    int  count=0;
    bool flag = false;
    for(char c:sh){
         if(isalpha(c)){
            if(flag == false) {
                count++;
            }
            flag = true;
       }else{
         flag = false;
       }
    }
    
    cout << count;
    return 0;
}

