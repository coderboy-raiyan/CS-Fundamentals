# include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int nums[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    int i=0,j = n-1, temp;
    while (i < j)
    {
       temp = nums[i];
       nums[i] = nums[j];
       nums[j] = temp;
       i++;
       j--;
    }
    for (int i = 0; i < n; i++)
    {
       printf("%d ", nums[i]);
    }
    

    return 0;
}