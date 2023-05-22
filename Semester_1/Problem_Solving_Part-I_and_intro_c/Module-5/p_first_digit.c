# include <stdio.h>
# include <ctype.h>
# include <math.h>

int main(){
   int x, digit,count;
   scanf("%d", &x);

   count = (int)log10(x);
   digit = (x / (int)(pow(10, count)) % 10);

    if(digit % 2 == 0){
        printf("EVEN");
    }else{
        printf("ODD");
    }

    return 0;
}