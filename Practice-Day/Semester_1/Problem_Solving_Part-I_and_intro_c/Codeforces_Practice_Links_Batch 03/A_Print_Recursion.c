# include <stdio.h>

void strPrint(int n){
    if(n == 0){
        return;   
    }
    printf("I love Recursion\n");
    strPrint(n-1);
}

int main(){
    int n;
    scanf("%d", &n);
    strPrint(n);
    return 0;
}