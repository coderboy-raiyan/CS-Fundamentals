# include <stdio.h>

void printArray(int * arr, int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    
}

int main(){
    int nums[4] = {10, 20, 30, 40};
    printArray(&nums, 4);
    return 0;
}