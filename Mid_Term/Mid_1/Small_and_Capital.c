# include <stdio.h>

int main(){
    int small = 0, capital = 0;
    char ch;
    while (scanf("%c", &ch) != EOF)
    {
       if(ch >= 'a' && ch <= 'z'){
            small++;
       }else{
            capital++;
       }
       
    }
    printf("%d %d", capital, small);
    
    return 0;
}