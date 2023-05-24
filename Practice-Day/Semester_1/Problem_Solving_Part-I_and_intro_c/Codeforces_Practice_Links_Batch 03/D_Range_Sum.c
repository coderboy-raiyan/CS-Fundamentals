# include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    long long int a, b;
    long long int temp;
    while (n--)
    {
       scanf("%lld %lld", &a, &b);
        if(a > b){
            temp = b;
            b = a;
            a = temp;
        }
        long long int res = (b * (b+1)) /2 - ((a - 1) * (a - 1 + 1)) / 2;
        printf("%d\n", res);
    }
    
    return 0;
}