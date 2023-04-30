# include <stdio.h>

void sum(int a, int b){
    int s = a +b;
    printf("%d", s);
    return;
}

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    sum(a,b);
    return 0;
}