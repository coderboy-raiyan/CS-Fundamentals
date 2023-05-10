# include <stdio.h>

// void fun(int nums1[], int nums2[], int total[], int row, int * col){
//     if(row < 0 && col < 0){
//         return;
//     }
//     fun(nums1, nums2, total, row-1, col-1);
//     total[row][col];
// }

int main(){
    int row, col;
    scanf("%d %d", &row, &col);
    int nums1[row][col];
    int nums2[row][col];
    int total[row][col];
    for (int i = 0; i < row; i++)
    {
       for (int j = 0; j < col; j++)
       {
            scanf("%d", &nums1[i][j]);
       }
       
    }
    for (int i = 0; i < row; i++)
    {
       for (int j = 0; j < col; j++)
       {
            scanf("%d", &nums2[i][j]);
       }
       
    }
    for (int i = 0; i < row; i++)
    {
       for (int j = 0; j < col; j++)
       {
            total[i][j] = nums1[i][j] + nums2[i][j];
       }
       
    }
    for (int i = 0; i < row; i++)
    {
       for (int j = 0; j < col; j++)
       {
            printf("%d ", total[i][j]);
       }
       printf("\n");
    }

    return 0;
}