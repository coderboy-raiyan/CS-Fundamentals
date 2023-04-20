# include <stdio.h>

int main(){
    int n, m;
    scanf("%d %d", &n, &m);
    int nums[n];
    for (int i = 0; i < n; i++)
    {
       scanf("%d", &nums[i]);
    }

    int sum[m];
    for (int i = 1; i <= m; i++)
    {
        sum[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
       sum[nums[i]]++;
    }
    for (int i = 1; i <= m; i++)
    {
        printf("%d\n", sum[i]);
    }
 
    return 0;
}