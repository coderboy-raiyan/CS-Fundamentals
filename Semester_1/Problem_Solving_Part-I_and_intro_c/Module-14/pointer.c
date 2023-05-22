# include <stdio.h>

int main(){
    int n = 10;
    printf("%p\n", &n);
    int * p = &n;
    // dereference update value of n
    *p = 500;
    // dereference print value of n
    printf("%d", *p);
    return 0;
}