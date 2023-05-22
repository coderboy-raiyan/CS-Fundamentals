# include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int nums[n+1], pos, val;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }
    scanf("%d %d", &pos, &val);
    for (int i = n; i >= pos+1; i--)
    {
        nums[i] = nums[i-1];
    }
    nums[pos] = val;
    for (int i = 0; i <= n; i++)
    {
        printf("%d ", nums[i]);
    }
    
    return 0;
}


