# include <stdio.h>

long long int summation(long long int nums[], long long int n){
    if(n < 0){
        return 0;
    }
    return summation(nums, n-1) + nums[n];
}

int main(){
    long long int n;
    scanf("%lld", &n);
    long long nums[n];
    for (int i = 0; i < n; i++)
    {
       scanf("%lld", &nums[i]);
    }
    
    long long int sum =  summation(nums, n-1);
    printf("%lld", sum);
    return 0;
}