# include <stdio.h>
# include <limits.h>

int maxNum(int nums[], int n){
    if(n < 0){
        return INT_MIN;
    }
    int max = maxNum(nums, n-1);
    if(nums[n] > max){
        return nums[n];
    }else{
        return max;
    }
}

int main(){
    int n;
    scanf("%d", &n);
    int nums[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }
    int max = maxNum(nums,n-1);
    printf("%d", max);
    return 0;
}