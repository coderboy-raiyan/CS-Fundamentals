# include <stdio.h>
# include <string.h>

int main(){
    char a[10], b[10], new[20];
    scanf("%s %s", a, b);
    printf("%d %d\n", strlen(a), strlen(b));
    for (int i = 0; i < strlen(a); i++)
    {
        new[i] = a[i];
    }
    printf("%s", new);
    
    // char temp = a[0];
    // a[0] = b[0];
    // b[0] = temp;
    // printf("%s %s", a, b);
    return 0;
}