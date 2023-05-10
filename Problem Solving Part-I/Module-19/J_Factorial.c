# include <stdio.h>

long long int fun(long long int n){
    if(n==0){
        return 1;
    }
    return fun(n-1)*n;
}

int main(){
    int n;
    scanf("%d", &n);
    long long int factorial = fun(n);
    printf("%lld", factorial);
    return 0;
}