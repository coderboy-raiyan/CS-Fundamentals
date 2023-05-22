# include <stdio.h>
# include <string.h>

int main(){
    char a[1001], b[1001];
    scanf("%s %s", a, b);
    printf("%d %d\n%s %s", strlen(a), strlen(b), a, b);
    
    return 0;
}