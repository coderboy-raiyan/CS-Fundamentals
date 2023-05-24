# include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int nums[n], i=0;
    for (int i = 0; i < n; i++)
    {
       scanf("%d", &nums[i]);
    }
    while (i < n)
    {
        if(nums[i] < 0){
            nums[i] = 2;
        }else if (nums[i] > 0){
            nums[i] = 1;
        }
        
       
        printf("%d ", nums[i]);
        i++;
    }
    
    
    return 0;
}