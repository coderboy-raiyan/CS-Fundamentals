# include <stdio.h>

void evenIndices(int nums[], int n){
    if(n < 0){
        return;
    }
    if(n % 2 == 0){
        printf("%d ", nums[n]);
    }
    evenIndices(nums, n-1);
}

int main(){
    int n;
    scanf("%d", &n);
    int nums[n];
    for (int i = 0; i < n; i++)
    {
       scanf("%d", &nums[i]);
    }
    evenIndices(nums, n-1);
    return 0;
}