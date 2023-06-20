# include <bits/stdc++.h>

using namespace std;

int main(){
    vector<int>nums(5);
    for (int i = 0; i < 5; i++)
    {
        nums[i] = i+1;
    }
    for (int i = 0; i < 5; i++)
    {
       cout << nums[i] << " ";
    }
    int s = 0;
    int f = 0;
    int size = nums.size();
    while (f != size-1)
    {
        s++;
        f+=2;
    }

    cout<< endl << s;
    
    return 0;
}

