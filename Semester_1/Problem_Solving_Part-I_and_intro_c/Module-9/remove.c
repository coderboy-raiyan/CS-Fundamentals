# include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int nums[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }
    int pos;
    scanf("%d", &pos);
    for (int i = pos; i < n - 1; i++)
    {
        nums[i] = nums[i+1];
    }
    for (int i = 0; i < n-1; i++)
    {
      printf("%d ", nums[i]);
    }
    
    
    return 0;
}