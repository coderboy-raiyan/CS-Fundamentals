# include <stdio.h>

int main(){
    int n, x;
    scanf("%d", &n);
    int nums[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }
    int count = 0;
    scanf("%d", &x);
    for (int i = 0; i < n; i++)
    {
        if(nums[i] == x){
            count++;
        }
    }
    printf("%d", count);
    return 0;
}