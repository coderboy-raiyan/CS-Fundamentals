# include <stdio.h>
/*
Take a positive integer N as input and print the pattern shown in the sample input output.

Input : -
8

Output : -

***************
 *************
  ***********
   *********
    *******
     *****
      ***
       *

*/


int main(){
    int n;
    scanf("%d", &n);
    int s = 1, k=(2*n)-1;
    for (int i = 1; i <= n; i++)
    {
        for (int c = 1; c <= s; c++)
        {
            printf(" ");
        }
        for (int r = 1; r <= k; r++)
        {
            printf("*");
        }
        s++;
        k-=2;
        printf("\n");
    }
    
    return 0;
}