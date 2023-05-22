# include <stdio.h>
# include <string.h>

void printStrLeng(char * str){
    printf("%d", strlen(str));
}

int main(){
    char myName[7] = "Raiyan";
    printStrLeng(myName);
    return 0;
}