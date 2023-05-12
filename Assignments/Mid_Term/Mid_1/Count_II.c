# include <stdio.h>

int main(){
    int vowel = 0;
    char ch;
    while (scanf("%c", &ch) != EOF)
    {
       if(ch == 'a'|| ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
        vowel++;
       }
    }
    printf("%d", vowel);
    
    return 0;
}