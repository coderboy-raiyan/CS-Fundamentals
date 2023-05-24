# include <stdio.h>

void numbers(int n){
    if(n <= 0){
        return;
    }
    numbers(n-1);
    printf("%d\n", n);
}

int main(){
    int n;
    scanf("%d", &n);
    numbers(n);
    return 0;
}