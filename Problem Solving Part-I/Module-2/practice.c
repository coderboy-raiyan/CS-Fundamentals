# include <stdio.h>

int main(){
    int a = 10;
    int b;
    char elseStatement[] = "It is not a useful value at all";
    char ifStatement[] = "Here is the useful value";
    scanf("%d", &b);
    double subtraction = a*1.0 / b;
    if(subtraction > 3){
        printf("%s %0.2lf", ifStatement, subtraction);
    }else{
        printf("%s", elseStatement);
    }
    return 0;
}