# include <stdio.h>

void doubleIt(int * p){
    printf("address of p - %p\n", p);
    *p = *p * 100;
}

int main(){
    int n = 100;
    doubleIt(&n);
    printf("address of n - %d", n);
    return 0;
}