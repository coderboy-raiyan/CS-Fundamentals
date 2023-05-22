# include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int nums[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }
    int x, flag;
    scanf("%d", &x);
    for (int i = 0; i < n-1; i++)
    {
       for (int j = i+1; j < n; j++)
       {
            if(nums[i] + nums[j] == x){
                flag = 1;
            }else{
                flag = 0;
            }
       }
       
    }
    if(flag){
        printf("YES");
    }else{
        printf("No");
    }
    
    return 0;
}

