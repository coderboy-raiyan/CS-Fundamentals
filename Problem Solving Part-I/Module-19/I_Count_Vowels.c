# include <stdio.h>

int fun(char ch[], int i){
    if(ch[i] == '\0'){
        return 0;
    }
    if(ch[i] >= 'A' && ch[i] <= 'Z'){
        ch[i] = ch[i] + 32;
    }
    if(ch[i] == 'a' || ch[i] == 'e' || ch[i] == 'i' || ch[i] == 'o' || ch[i] == 'u'){
        return fun(ch, i+1) + 1;
    }else{
        fun(ch, i+1);
    }
}

int main(){
    char ch[201];
    fgets(ch, ch[201], stdin);
    int leng = fun(ch, 0);
    printf("%d", leng);
    return 0;
}