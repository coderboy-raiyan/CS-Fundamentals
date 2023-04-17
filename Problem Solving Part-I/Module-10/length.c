# include <stdio.h>

int main(){
    char a[8];
    scanf("%s", a);
    int count = 0;
    for (int i = 0; a[i] != '\0'; i++)
    {
        count++;
    }
    printf("%d", count);
    
    return 0;
}