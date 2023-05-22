# include <stdio.h>

int main(){
    int taka;
    scanf("%d", &taka);
    if(taka >= 5000){
        printf("Cox's Bazar jabo \n");
        if(taka >= 10000){
            printf("St Martins island jabo");
        }else{
            printf("I will be back home");
        }
    }else{
        printf('Kuthao jabo na');
    }

    return 0;
}