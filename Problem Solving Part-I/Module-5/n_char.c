# include <stdio.h>
# include <ctype.h>

int main(){
    char x, result;
    scanf("%c", &x);
    if(isupper(x)){
        result = tolower(x);
        printf("%c", result);
    }
    else{
        result = toupper(x);
        printf("%c", result);
    }
    return 0;
}