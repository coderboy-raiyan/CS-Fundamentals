# include <stdio.h>

int main(){
    char a;
    int convert;
    scanf("%c", &a);
   
    if(a >= 'a' && a <= 'z'){
        if(a == 'z') {
        printf("a");
    }   else{
         convert = a + 1;
         printf("%c", convert);
        }
    }
    return 0;
}