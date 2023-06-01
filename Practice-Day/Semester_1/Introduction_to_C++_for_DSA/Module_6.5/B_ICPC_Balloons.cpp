# include <bits/stdc++.h>

using namespace std;

int main(){
    int testCase;
    cin >> testCase;
    while (testCase--)
    {
        int count[26] = {0};
        int sum = 0;
        int charCount;
        cin >> charCount;
        for (int i = 0; i < charCount; i++)
        {
            char ch;
            cin >> ch;
            if(count[ch - 'A'] < 2){
                count[ch-'A']+=2;
            }else{
                count[ch-'A']++;
            }
        }
        for (int j = 0; j < 26; j++)
        {
           if(count[j]){
                sum+=count[j];
           }
        }
        cout << sum << endl;
        
    }
    
    return 0;
}

