# include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int s = n-1, k=0;
    for (int i = 0; i < n; i++)
    {
        for (int i = 0; i < s; i++)
        {
            printf(" ");
        }
        for (int i = 0; i <= k; i++)
        {
            printf("*");
        }
        s--;
        k+=2;
        printf("\n");
        
    }
    
    return 0;
}