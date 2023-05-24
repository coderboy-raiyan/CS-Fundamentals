# include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int nums[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }
    int min = nums[0], minIdx = 0, maxIdx = 0, max = nums[0];
    for (int i = 0; i < n; i++)
    {
        if(nums[i] < min){
            min = nums[i];
            minIdx = i;
        } 
        if(nums[i] > max){
            max = nums[i];
            maxIdx = i;
        }
    }
    nums[minIdx] = max;
    nums[maxIdx] = min;
    for (int i = 0; i < n; i++)
    {
       if(i < n - 1){
        printf("%d ", nums[i]);
       }else{
        printf("%d", nums[i]);
       }
    }
    
    
    return 0;
}