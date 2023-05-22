# include <stdio.h>
# include <ctype.h>
# include <math.h>

int main(){
    int n, test, i = 0, count;
    scanf("%d", &test);
    while (i < test)
    {
    scanf("%d", &n);
     do
    {
    printf("%d ", n % 10);
    n = n /10;

    } while (n != 0);
    printf("\n");
    i++;
    }
 
    return 0;
}