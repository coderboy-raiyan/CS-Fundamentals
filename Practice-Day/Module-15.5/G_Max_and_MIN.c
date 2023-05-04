# include <stdio.h>

int min(int * nums, int n){
    int minNo = nums[0];
    for (int i = 0; i < n; i++)
    {
        if(nums[i] < minNo){
            minNo = nums[i];
        }
    }
    return minNo;
}
int max(int * nums, int n){
    int maxNo = nums[0];
    for (int i = 0; i < n; i++)
    {
        if(nums[i] > maxNo){
            maxNo = nums[i];
        }
    }
    return maxNo;
}

int main(){
    int n;
    scanf("%d", &n);
    int nums[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }
    int minNo = min(nums, n);
    int maxNo = max(nums, n);
    printf("%d %d", minNo, maxNo);
    return 0;
}