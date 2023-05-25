# include <stdio.h>

void sum10(int * a){
    *a = *a+10;
}

int main(){
    int a = 30;
    printf("in main before function called - %d \n", a);
    sum10(&a);
 printf("in main after function called - %d \n", a);
    return 0;
}