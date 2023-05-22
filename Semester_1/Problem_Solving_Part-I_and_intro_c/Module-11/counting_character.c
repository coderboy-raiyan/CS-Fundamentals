# include <stdio.h>

int main(){
    char a[100];
    scanf("%s", a);
    int ctn[26] = {0};
    for (int i = 0; a[i] != '\0'; i++)
    {
        ctn[a[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
       printf("%c - %d\n", i + 'a', ctn[i]);
    }
    
    return 0;
}