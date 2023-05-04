# include <stdio.h>


int main(){
    int nums[3], copyNums[3];
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &nums[i]);   
    }
    for (int i = 0; i < 3; i++)
    {
        copyNums[i] = nums[i];
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = i+1; j < 3; j++)
        {
           if(copyNums[i] > copyNums[j]){
                int temp = copyNums[i];
                copyNums[i] = copyNums[j];
                copyNums[j] = temp;
           }
        }
        
    }
    for (int i = 0; i < 3; i++)
    {
       printf("%d\n", copyNums[i]);
       
    }
    printf("\n");
    for (int i = 0; i < 3; i++)
    {
       printf("%d\n", nums[i]);
       
    }
    
    
    return 0;
}