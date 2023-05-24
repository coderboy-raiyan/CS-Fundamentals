# include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int nums[n];
    for (int i = 0; i < n; i++)
    {
      scanf("%d", &nums[i]);
    }
    int j = 0, k, temp;
    for (int i = 0; i < n; i++)
    {
        if(nums[i] == 0){
            k = i-1;
            while (j < k)
            {
                temp = nums[j];
                nums[j] = nums[k];
                nums[k] = temp;
                j++;
                k--;
            }
            j = 0;
            
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", nums[i]);
    }
    
    
    return 0;
}