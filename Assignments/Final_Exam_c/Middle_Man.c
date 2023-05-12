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
    for (int i = 0; i < n-1; i++)
    {
       for (int j = i+1; j < n; j++)
       {
         if(nums[i] > nums[j]){
            temp = nums[i];
            nums[i] = nums[j];
            nums[j] = temp;
         }
       }
       
    }
    if(n % 2 == 0){
        printf("%d %d", nums[(n/2)-1], nums[n/2]);
    }else{
        printf("%d", nums[(n+1)/2-1]);
    }
    
    
    
    return 0;
}