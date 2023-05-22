# include <stdio.h>

int main(){
    int row, col;
    scanf("%d %d", &row, &col);
    int nums[row][col];
    int totalElement = row * col;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
           scanf("%d", &nums[i][j]);
        }
        
    }
    int totalZero = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
           if(nums[i][j] == 0){
             totalZero++;
           }
        }
        
    }
    if(totalElement == totalZero){
        printf("Zero/null matrix");
    }else{
        printf("not a zero/null matrix");
    }
    

    return 0;
}