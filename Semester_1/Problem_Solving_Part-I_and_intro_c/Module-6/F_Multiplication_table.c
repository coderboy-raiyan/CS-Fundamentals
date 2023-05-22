# include <stdio.h>

int main(){
    int n , multiply, i = 1;
   scanf("%d", &n);
    while (i <= 12)
    {
        multiply = n * i;
        printf("%d * %d = %d\n", n, i, multiply);
        i++;
    }
    
    return 0;
}