# include <stdio.h>
# include <string.h>

int main(){
    char a[11], b[11], new[22];
    scanf("%s %s", a, b);
    printf("%d %d\n", strlen(a), strlen(b));
    for (int i = 0; i <= strlen(a); i++)
    {
        new[i] = a[i];
    }
    int j = strlen(new);
    for (int i = 0; i <= strlen(b); i++)
    {
        new[j] = b[i];
        j++;
    }
    printf("%s\n", new);
    
    char temp = a[0];
    a[0] = b[0];
    b[0] = temp;
    printf("%s %s", a, b);
    return 0;
}