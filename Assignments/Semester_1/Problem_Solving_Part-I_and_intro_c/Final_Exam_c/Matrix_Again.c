# include <stdio.h>

int main(){
    int n,m;
    scanf("%d %d", &n, &m);
    int nums[n][m];
    for (int i = 0; i < n; i++)
    {
       for (int j = 0; j < m; j++)
       {
            scanf("%d", &nums[i][j]);
       }
       
    }
    int lastRow = n-1;
    int lastCol = m-1;
    for (int i = 0; i < m; i++)
    {
       printf("%d ", nums[lastRow][i]);
    }
    printf("\n");
    for (int i = 0; i < n; i++)
    {
       printf("%d ", nums[i][lastCol]);
    }
    
    return 0;
}