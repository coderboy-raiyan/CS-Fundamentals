# include <stdio.h>

int main(){
    int n = 10;
    int * ptr = &n;
    int * ptr2 = ptr;
    *ptr2 = 100;
    printf("address of n - %p\n", &n);
    printf("value of ptr - %p\n", ptr2);
    return 0;
}