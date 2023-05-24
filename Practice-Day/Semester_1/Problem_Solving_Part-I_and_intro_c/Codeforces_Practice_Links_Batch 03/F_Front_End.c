# include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int nums[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }
    int i = 0, j = n-1;
    while (i <= j)
    {
        if(i == j){
            printf("%d", nums[i]);
        }else{
            printf("%d %d ", nums[i], nums[j]);
        }
        i++;
        j--;
    }
    
    return 0;
}