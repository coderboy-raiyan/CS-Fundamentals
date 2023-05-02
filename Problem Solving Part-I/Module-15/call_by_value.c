# include <stdio.h>

int fun(int x){
    x = 500;
    printf("x value fun - %d\n", x);
}

int main(){
    int x = 200;
    fun(x);
     printf("x value in main - %d", x);
    return 0;
}