# include <stdio.h>

void fun(int nums[], int n){
    if(n < 0){
        return;
    }
    fun(nums, n-1);
    printf("%d\n", nums[n]);
}

int main(){
    int n;
    scanf("%d", &n);
    int nums[n];
    for (int i = 0; i < n; i++)
    {
       scanf("%d", &nums[i]);
    }
    fun(nums, n-1);
    return 0;
}