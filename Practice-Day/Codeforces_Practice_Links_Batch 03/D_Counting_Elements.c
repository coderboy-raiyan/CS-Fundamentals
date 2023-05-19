# include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int nums[n];
    for (int i = 0; i < n; i++)
    {
       scanf("%d", &nums[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (nums[i] > nums[j])
            {
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }
        }
    }
    int count = 0, flag = 0;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if(nums[i] + 1 == nums[j]){
                flag = 1;
                count++;
                break;
            }
        }
        
    }
    if(flag){
        printf("%d", count);
    }else{
        printf("%d", 0);
    }
    return 0;
}