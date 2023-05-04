# include <stdio.h>

/*
Question: Make a function named small_to_capital() which will take a small alphabet as a parameter (which is a character) and it will convert that small alphabet to capital alphabet and return through that function. So, the return type will be char. Now in the main function take a character input which will be small alphabets and call that function to get the capital alphabet and print that in the main function.

*/

int small_to_capital(char c){
    if(c >= 'a' && c<= 'z'){
        return c-32;
    }
}

int main(){
    char ch;
    scanf("%s", &ch);
    char converted = small_to_capital(ch);
    printf("%c", converted);
    return 0;
}