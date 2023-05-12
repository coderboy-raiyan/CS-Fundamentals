# include <stdio.h>

int main(){
    char ch;
    int capital = 0, small = 0, spaces = 0; 
    while (scanf("%c", &ch) != EOF)
    {
        if(ch >= 'A' && ch <= 'Z'){
            capital++;
        }
        if(ch >= 'a' && ch <= 'z'){
            small++;
        }
        if(ch == ' '){
            spaces++;
        }
    }
    
    printf("Capital - %d\nSmall - %d\nSpaces - %d",capital, small, spaces);

    return 0;
}