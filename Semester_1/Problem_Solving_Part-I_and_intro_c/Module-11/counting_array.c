# include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int nums[n];
    for (int i = 0; i < n; i++)
    {
       scanf("%d", &nums[i]);
    }
    int ctn[7] = {0};
    for (int i = 0; i < n; i++)
    {
        ctn[nums[i]]++;
    }
    for (int i = 0; i < 7; i++)
    {
        printf("%d - %d\n",i, ctn[i]);
    }
    return 0;
}