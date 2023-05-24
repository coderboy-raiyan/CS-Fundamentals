# include <stdio.h>

void count_odd(void){
    int n;
    scanf("%d", &n);
    int nums[n], odd=0;
    for (int i = 0; i < n; i++)
    {
       scanf("%d", &nums[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if(nums[i] % 2 != 0){
            odd++;
        }
    }
    printf("%d", odd);
    
}

int main(){
    count_odd();
    return 0;
}