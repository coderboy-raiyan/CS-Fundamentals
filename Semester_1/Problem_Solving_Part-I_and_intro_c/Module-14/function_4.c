# include <stdio.h>

void sum(){
    int a, b;
    scanf("%d %d", &a, &b);
    int s = a+b;
    printf("%d\n", s);
    return;
}

int main(){
    sum();
    sum();
    sum();
    return 0;
}