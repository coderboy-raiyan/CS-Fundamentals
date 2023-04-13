# include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int nums[n], i = 0;
    for (int i = 0; i < n; i++)
    {
      scanf("%d", &nums[i]);
    }
    int min = nums[0], idx=0;
    while (i < n)
    {
       if(nums[i] < min){
        min = nums[i];
        idx = i;
       }
       i++;
    }
    printf("%d %d", min, idx+1);
    
  
    return 0;
}