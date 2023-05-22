# include <stdio.h>

int main(){
    char x;
    scanf("%c", &x);
    if(x >= '0' && x <= '9'){
        printf("IS DIGIT\n");
    }else{
        if(x >= 'a' && x <= 'z'){
            printf("ALPHA\nIS SMALL");
        }else{
            printf("ALPHA\nIS CAPITAL");
        }
    }
    return 0;
}