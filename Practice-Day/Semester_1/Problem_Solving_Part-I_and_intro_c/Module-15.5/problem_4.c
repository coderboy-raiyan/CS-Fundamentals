# include <stdio.h>

void change_it(int * nums, int n){
    *(nums+(n-1)) = 100;
}

int main(){
    int n;
    scanf("%d", &n);
    int nums[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }
    change_it(nums, n);
    for (int i = 0; i < n; i++)
    {
       printf("%d ", nums[i]);
    }
    
    return 0;
}