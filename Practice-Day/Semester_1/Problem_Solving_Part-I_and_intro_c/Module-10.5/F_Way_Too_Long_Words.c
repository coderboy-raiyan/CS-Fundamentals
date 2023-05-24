# include <stdio.h>
# include <string.h>

int main(){
    int n = 0;
    scanf("%d", &n);
    char a[100];
    int last = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%s", a);
        last = strlen(a);
        if(strlen(a) > 10){
            printf("%c%d%c\n", a[0], last - 2, a[last-1]);
        }else{
            printf("%s\n", a);
        }
    }
    
    return 0;
}