# include <stdio.h>

int main(){
    int nums[3], copy[3];
    for (int i = 0; i < 3; i++)
    {
       scanf("%d", &nums[i]);
    }
    
    for (int i = 0; i < 3; i++)
    {
        copy[i] = nums[i];
    }
    int temp;
    for (int i = 0; i < 2; i++)
    {
        for (int j = i+1; j < 3; j++)
        {
            if(copy[i] > copy[j]){
                temp = copy[i];
                copy[i] = copy[j];
                copy[j] = temp;
            }
        }
        
    }
    
    for (int i = 0; i < 3; i++)
    {
       printf("%d\n", copy[i]);
    }
    printf("\n");
    for (int i = 0; i < 3; i++)
    {
       printf("%d\n", nums[i]);
    }
    

    return 0;
}