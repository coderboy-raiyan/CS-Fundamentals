# include <stdio.h>

int fun(char ch[], int i){
    if(ch[i] == '\0'){
        return 0;
    }
    int leng = fun(ch, i+1);
    return leng + 1;
}

int main(){
    char ch[6] = "hello";
    int strLeng =  fun(ch, 0);
    printf("%d", strLeng);
    return 0;
}