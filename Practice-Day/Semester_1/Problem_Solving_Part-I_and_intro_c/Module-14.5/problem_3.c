# include <stdio.h>
/*
 Question: Make a function named char_to_ascii() which will take a character as parameter and it will convert that character to ascii value and return through that function. So, the return type will be int. Now in the main function take a character input and call that function to get the integer value of it and print that in the main function.

 Sample Input : -
 a

 Sample Output : -
 97
*/

int char_to_ascii(char c){
    int converTed = c * 1;
    return converTed;
}

int main(){
    char n;
    scanf("%s", &n);
    int num = char_to_ascii(n);
    printf("%d", num);
    return 0;
}