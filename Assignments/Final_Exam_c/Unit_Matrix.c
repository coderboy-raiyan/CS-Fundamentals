# include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int nums[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &nums[i][j]);
        }
        
    }
    int flag = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(i == j && nums[i][j] != 1){
                flag = 0;
                break;
            }
            if(i != j && nums[i][j] != 0){
                flag = 0;
                break;
            }
        }
        
    }
    if(flag){
        printf("YES");
    }else{
        printf("NO");
    }

    return 0;
}