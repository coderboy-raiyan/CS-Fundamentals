# include <stdio.h>

int main(){
    int row, col;
    scanf("%d %d", &row, &col);
    int nums[row][col];
    for (int i = 0; i < row; i++)
    {
       for (int j = 0; j < col; j++)
       {
         scanf("%d", &nums[i][j]);
       }
       
    }
    int target;
    scanf("%d", &target);
    for (int i = 0; i < col; i++)
    {
       printf("%d ", nums[target][i]);
    }
    printf("\n");
    for (int i = 0; i < row; i++)
    {
        printf("%d ", nums[i][target]);
    }
    
    
    return 0;
}