# include <stdio.h>

int fun(int i){
    if(i <= 1){
        return 1;
    }
    return i * fun(i-1);
}

int main(){
    int count = fun(6);
    printf("%d", count);
}
