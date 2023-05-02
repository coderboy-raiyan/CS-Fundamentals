# include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int k=n-1;
   for (int i = 0; i < n; i++)
   {
        for (int i = 0; i <= k; i++)
        {
            printf("*");
        }
       
        k--;
        printf("\n");
   }
   
    
    return 0;
}