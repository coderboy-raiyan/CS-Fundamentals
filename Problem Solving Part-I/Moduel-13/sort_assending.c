# include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int nums[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }
    int temp;
    for (int i = 0; i < n - 1; i++)
    {
        temp = nums[i];
        for (int j = i+1; j < n; j++)
        {
            if(nums[i] > nums[j]){
                nums[i] = nums[j];
                nums[j] = temp;
            }
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", nums[i]);
    }
    
    
    return 0;
}