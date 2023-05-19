# include <stdio.h>
# include <limits.h>
# include <stdlib.h>

int main(){
    int n;
    scanf("%d", &n);
    int nums[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }
    int highest  = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if(nums[i] > highest){
            highest = nums[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
       printf("%d ", abs(highest - nums[i]));
    }

    return 0;
}