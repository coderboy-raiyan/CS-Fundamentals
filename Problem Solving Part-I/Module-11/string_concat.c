# include <stdio.h>
# include <string.h>

int main(){
    char a[200], b[100];
    scanf("%s %s", a, b);
    int leng = strlen(a);
    for (int i = 0; i <= strlen(b); i++)
    {
        a[leng] = b[i];
        leng++;
    }
    printf("%s", a);
    return 0;
}