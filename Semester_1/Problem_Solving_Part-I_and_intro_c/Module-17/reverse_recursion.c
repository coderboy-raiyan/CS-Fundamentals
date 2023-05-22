# include <stdio.h>

void fun(int i){
    if(i > 5){
        return;
    }
    fun(i+1); // wait...
    printf("%d\n", i);
}

int main(){
    fun(1);
    return 0;
}