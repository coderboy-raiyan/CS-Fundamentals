# include <stdio.h>

int my_len(char ch[100]){
    int count = 0;
    for (int i = 0; ch[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

int main(){
    char ch[100];
    scanf("%s", &ch);
    int count = my_len(ch);
    printf("%d", count);
    return 0;
}