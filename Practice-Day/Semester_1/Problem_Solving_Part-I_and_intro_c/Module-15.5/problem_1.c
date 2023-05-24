# include <stdio.h>

/*
Question: Write a function named my_abs() that receives an integer value as parameter and returns the absolute value of that. Absolute value means if the value is negative it will be converted to positive value. Then print the value in the main function.

*/

int my_abs(int n){
    int converted = n * -1;
    return converted;
}

int main(){
    int n;
    scanf("%d", &n);
    int converted = my_abs(n);
    printf("%d", converted);
    return 0;
}