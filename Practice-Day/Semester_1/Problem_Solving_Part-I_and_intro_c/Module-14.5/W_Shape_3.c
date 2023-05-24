# include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int s = n-1, k=0;
    for (int i = 1; i <= (2 * n); i++)
    {
        for (int i = 0; i < s; i++)
        {
           printf(" ");
        }
        for (int i = 0; i <= k; i++)
        {
            printf("*");
        }
        if(i == n){
            k = k;
        }else if(i > n){
            k-=2;
            s++;
        }
        else{
            s--;
            k+=2;
        }
       
        printf("\n");
        
    }
    return 0;
}