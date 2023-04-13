# include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int nums[n],i = 0, sum = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    while (i < n)
    {
        sum+=nums[i];
        i++;
    }
    
    printf("%d",  sum < 0 ? sum * -1 : sum);
    
    return 0;
}