# include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int nums[n];
    for (int i = 0; i < n; i++)
    {
      cin >> nums[i];
    }
    
    int k = 0, j, temp;
    for (int i = 0; i < n; i++)
    {
        if(nums[i] == 0){
            j = i-1;
            while (k < j)
            {
              temp = nums[k];
              nums[k] = nums[j];
              nums[j] = temp;
              j--;
              k++;
            }
            k=0;
        }
    }
    for (int i = 0; i < n; i++)
    {
      cout << nums[i] << " ";
    }
    return 0;
}

