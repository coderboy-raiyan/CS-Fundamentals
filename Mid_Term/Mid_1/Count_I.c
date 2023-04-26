# include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int nums[n], even = 0, odd = 0;
    for (int i = 0; i < n; i++)
    {
       scanf("%d", &nums[i]);
    }
    
    for (int i = 0; i < n; i++)
    {
        if(nums[i] % 2 == 0){
            even++;
        }else{
            odd++;
        }
    }
    printf("%d %d", even, odd);

    return 0;
}