# include <stdio.h>

int main(){
    int n,x;
    scanf("%d", &n);
    int nums[n], i=0;
    for (int i = 0; i < n; i++)
    {
       scanf("%d", &nums[i]);
    }
    scanf("%d", &x);
    while (i < n)
    {
        if(x == nums[i]){
            printf("%d", i);
            return 0;
        }
        i++;
    }
    printf("%d", -1);
    return 0;
}