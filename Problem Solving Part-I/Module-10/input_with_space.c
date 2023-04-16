# include <stdio.h>
# include <string.h>

int main(){
    char a[8];
    fgets(a, 8, stdin);
    printf("%s", a);
    return 0;
}