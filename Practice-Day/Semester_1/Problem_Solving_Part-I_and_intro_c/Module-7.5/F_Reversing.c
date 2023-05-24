# include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int nums[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }
    
    while (n--)
    {
       printf("%d ", nums[n]);
    }
    
    return 0;
}