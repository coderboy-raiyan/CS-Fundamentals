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
    int flag = 1;
    if(row != col){
        flag = 0;
    }
    for (int i = 0; i < row; i++)
    {
       for (int j = 0; j < col; j++)
       {
            if(i == j){
                continue;
            }
            if(nums[i][j] != 0){
                flag = 0;
            }
       }
       
    }
    if(flag){
        printf("It's a primary diagonal");
    }else{
        printf("It's not a primary diagonal");
    }
    
    return 0;
}