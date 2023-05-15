# include <stdio.h>
# include <stdlib.h>

int main(){
    int odd, even;
    scanf("%d %d", &odd, &even);
    if(odd == 0 || even == 0)
    {
        printf("NO");
        return 0;
    }
    if(abs(odd - even) <= 1){
        printf("YES");
    }else{
        printf("NO");
    }

    return 0;
}