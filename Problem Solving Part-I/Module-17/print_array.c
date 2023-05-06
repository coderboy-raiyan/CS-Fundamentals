# include <stdio.h>

void printArray(int arr[], int n, int i){
    if(i > n-1){
        return;
    }
    printf("%d\n", *(arr+i));
    printArray(arr, n, i+1);
}

int main(){
    int n;
    scanf("%d", &n);
    int nums[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }
    printArray(nums, n, 0);
    return 0;
}