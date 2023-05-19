# include <stdio.h>
# include <limits.h>

int main(){
    int n, k;
    scanf("%d %d", &n, &k);
    int nums[n];
    for (int i = 0; i < n; i++)
    {
       scanf("%d", &nums[i]);
    }
    int j = k-1;
    int min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if(nums[i] < min){
            min = nums[i];
        }
        if(i == j){
            printf("%d ", min);
            min = INT_MAX;
            j+=k;
        }
    }
    if(n % k != 0){
        printf("%d", min);
    }

    return 0;
}