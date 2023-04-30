# include <stdio.h>

int summation(int x, int y){
   int sum = x+y;
   return sum;
}

int main(){
    int a=0, b=0;
    scanf("%d", &a, &b);
    int sum = summation(a,b);
    printf("%d", sum);
    return 0;
}