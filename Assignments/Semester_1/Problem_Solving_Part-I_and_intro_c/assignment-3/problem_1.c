# include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int s=n-1, k=1;
    for (int i = 1; i <= (2*n)-1; i++)
    {
        for (int c = 1; c <= s; c++)
        {
            printf(" ");
        }
        for (int r = 1; r <= k; r++)
        {
          printf("%d", r);
        }
        if(i >= n){
            s++;
            k-=2;
        }else{
            s--;
            k+=2;
        }
        printf("\n");
        
    }
    
    return 0;
}