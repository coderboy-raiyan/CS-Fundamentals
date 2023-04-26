# include <stdio.h>

int main(){
    char ch;
    int sum[26] = {0};
    while (scanf("%c", &ch) != EOF)
    {
        sum[ch - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        printf("%c - %d\n", i + 'a', sum[i]);
    }
    
    return 0;
}