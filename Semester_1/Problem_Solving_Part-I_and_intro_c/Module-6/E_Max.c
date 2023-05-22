# include <stdio.h>
# include <limits.h>

// Max value
int main(){
    int n, num, i = 0, max = 0;
    scanf("%d",&n);
    while (i < n)
    {
       scanf("%d", &num);
       if(num > max){
        max = num;
       }
        i++;
    }
    printf("%d", max);
    
    return 0;
}

// Max and Min
int main(){
    int n, num, i = 0, max = INT_MIN, min = INT_MAX;
    scanf("%d",&n);
    while (i < n)
    {
       scanf("%d", &num);
       if(num > max){
        max = num;
       }
       if(num < min){
        min = num;
       }
      
        i++;
    }
    printf("%d", max);
    
    return 0;
}