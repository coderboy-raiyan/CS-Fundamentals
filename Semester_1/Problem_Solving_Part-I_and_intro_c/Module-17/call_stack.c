# include <stdio.h>

void world(void){
    printf("world start\n");
}

void hello(void){
    printf("hello start\n");
    world();
}

int main(){
    printf("main start\n");
    hello();
    printf("main end");
    return 0;
}