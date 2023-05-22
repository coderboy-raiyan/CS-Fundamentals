# include <stdio.h>

void fun(int n){
    if(n == 0){
        return;
    }
    int x = n % 10;
    fun(n/10);
    printf("%d ", x);
}

int main(){
    int test, n;
    scanf("%d", &test);
    while (test--)
    {
       scanf("%d", &n);
       fun(n);
       if(n == 0){
        printf("%d", 0);
       }
       printf("\n");
    }
    
    return 0;
}