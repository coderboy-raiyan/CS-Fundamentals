# include <stdio.h>

int main(){
    int test;
    scanf("%d", &test);
    long long int sum, a, b, c;
    while (test--)
    {
        scanf("%lld %lld %lld %lld", &sum, &a, &b, &c);
        printf("%lld\n", sum - (a + b + c));
    }
    
    return 0;
}