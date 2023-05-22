# include <stdio.h>

int main(){
    int n, i=1;
    scanf("%d", &n);

    if(n == 1){
        printf("%d", -1);
        return 0;
    }else{
        while (i <= n)
        {
            if(i % 2 == 0){
                printf("%d\n", i);
            }
            i++;
        }
        
    }
   return 0;
    
}