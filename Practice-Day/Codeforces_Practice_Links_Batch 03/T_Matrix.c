# include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int nums[n][n], primaryDiagonal = 0, secondaryDiagonal = 0;
    for (int i = 0; i < n; i++)
    {
       for (int j = 0; j < n; j++)
       {
            scanf("%d", &nums[i][j]);
       }
    }
    for (int i = 0; i < n; i++)
    {
       for (int j = 0; j < n; j++)
       {
            if(i == j){
                primaryDiagonal+=nums[i][j];
            }
            if(i + j == (n-1)){
                secondaryDiagonal+=nums[i][j];
            }
       }
    }

    printf("%d", (primaryDiagonal - secondaryDiagonal) * -1);
    
    return 0;
}