# include <bits/stdc++.h>

using namespace std;

int main(){
    getchar();
    int count[26]={0};
    char ch;
    while (scanf("%c", &ch) != EOF)
    {
        count[ch - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if(count[i]){
          while (count[i] != 0)
          {
            printf("%c", i + 'a');
            count[i]--;
          }
          
        }
    }
    
    return 0;
}

