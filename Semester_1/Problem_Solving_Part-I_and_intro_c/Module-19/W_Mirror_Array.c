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
    for (int i = 0; i < row; i++)
    {
        for (int j = col-1; j >= 0; j--)
        {
           printf("%d ", nums[i][j]);
        }
        printf("\n");
    }

    return 0;
}