# include <stdio.h>

int main(){
    int n, num, even = 0, odd = 0, positive = 0, negative = 0;
    int i = 0;
    scanf("%d", &n);
    while (i < n)
    {
       scanf("%d", &num);
       if(num < 0){
            negative++;
       }
       if(num > 0) {
            positive++;
       }
      
        if(num % 2 == 0){
            even++;
        }else  {
            odd++;
        }    
       
       i++;
    }
    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d", even, odd, positive, negative);
    
    return 0;
}