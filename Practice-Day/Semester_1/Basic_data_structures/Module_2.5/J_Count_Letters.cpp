# include <bits/stdc++.h>

using namespace std;

class Alpha{
    public :
    char c;
    int cnt;
};

int main(){
    vector<Alpha>nums(26);
    char ch;
    for (int i = 0; i < 26; i++)
    {
       nums[i].c = i + 'a';
       nums[i - 'a'].cnt = 0;
    }
    while (scanf("%c", &ch) != EOF)
    {
        nums[ch - 'a'].cnt = nums[ch - 'a'].cnt+1;
    }
    
    for (int i = 0; i < 26; i++)
    {
        if(nums[i].cnt != 0){
            cout << nums[i].c << " : " << nums[i].cnt << endl;
        }
    }
    

    return 0;
}

