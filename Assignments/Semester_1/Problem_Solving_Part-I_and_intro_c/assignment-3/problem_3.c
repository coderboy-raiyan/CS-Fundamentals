# include <stdio.h>

int count_before_zero(int * nums, int n){
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if(nums[i] != 0){
            count++;    
        }else{
            break;
        }
    }
    return count;
}

int main(){
    int n;
    scanf("%d", &n);
    int nums[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }
    int counted = count_before_zero(nums, n);
    printf("%d", counted); 
    return 0;
}