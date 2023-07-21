# include <stdio.h>

void printArray(int n, int nums[]){
    for (int i = 0; i < n; i++)
    {
        printf("%d ", nums[i]);
    }
    
}

void ascendingSort(int n, int nums[]){
     int temp;
    for (int i = 0; i < n-1; i++)
    {
       for (int j = i+1; j < n; j++)
       {
            temp = nums[i];
            if(nums[i] > nums[j]){
                nums[i] = nums[j];
                nums[j] = temp;
            }
       }
       
    }
    printArray(n, nums);
}
void descendingSort(int n, int nums[]){
      int temp;
    for (int i = 0; i < n-1; i++)
    {
       for (int j = i+1; j < n; j++)
       {
            temp = nums[i];
            printf("temp - %d : num - %d", temp, nums[j]);
            if(nums[i] < nums[j]){
                nums[i] = nums[j];
                nums[j] = temp;
            }
       }
       
    }
    // printArray(n, nums);
}

int main(){
    int n;
    scanf("%d", &n);
    int nums[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }
    int chooseSort;
    scanf("%d", &chooseSort);
    if(chooseSort){
        ascendingSort(n, nums);
    }else{
        descendingSort(n, nums);
    }

    return 0;
}

