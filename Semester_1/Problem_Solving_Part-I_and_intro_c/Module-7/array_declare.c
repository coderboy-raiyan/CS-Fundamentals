# include <stdio.h>

int main(){
    int nums[3]; 
    for(int i = 0; i < 3; i++){
        scanf("%d", &nums[i]);
    } 
    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", nums[i]);
    }
    
    return 0;
}