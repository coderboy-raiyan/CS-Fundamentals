# include <bits/stdc++.h>

using namespace std;

class CustomAlpha{
    public :
    char c;
    int cnt;
};

bool cmp(CustomAlpha a, CustomAlpha b){
    if(a.cnt < b.cnt) {
        return true;
    }else{
        return false;
    }
}

int main(){
    int n;
    cin >> n;
    CustomAlpha singleChar[26];
    for (int i = 0; i < 26; i++)
    {
        singleChar[i].c = i+'a';
        singleChar[i].cnt = 0;
    }
    
    char ch;
    while (n--)
    {
        cin >> ch;
        singleChar[ch - 'a'].cnt = singleChar[ch - 'a'].cnt + 1;
    }
    sort(singleChar, singleChar+26, cmp);
    for (int i = 0; i < 26; i++)
    {
     
         while (singleChar[i].cnt != 0)
         {
            cout << singleChar[i].c;
            singleChar[i].cnt--;
         }
         
      
    }

    return 0;
}

