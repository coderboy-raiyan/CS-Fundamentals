# include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int s = n-1, k=1;
    for (int i = 1; i <= n; i++)
    {
        for (int c = 1; c <= s; c++)
        {
            printf(" ");
        }
        for (int r = 1; r <= k; r++)
        {
            printf("%d", k);
        }
        s--;
        k++;
        printf("\n");
    }
    
    return 0;
}