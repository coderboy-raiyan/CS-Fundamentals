# include <stdio.h>
/*
Take a positive integer N as input and print the pattern shown in the sample input output.

Input : -
5

Output : -

    *
   **
  ***
 ****
*****


*/


int main(){
    int n;
    scanf("%d", &n);
    int s=n-1, k=1;
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
        s--;
        k++;
        printf("\n");
    }
    
    return 0;
}