# include <stdio.h>
# include <ctype.h>

int main(){
    char x;
    int ans;
 
    scanf("%c", &x);
 
  
    if(x >= 'a' && x <= 'z'){
        ans = x - 32;
        printf("%c", ans);
    }else{
        ans = x + 32;
        printf("%c", ans);
    }
    return 0;
}