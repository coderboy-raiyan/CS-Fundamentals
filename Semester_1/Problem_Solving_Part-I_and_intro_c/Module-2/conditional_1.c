# include <stdio.h>
# include <stdbool.h>

int main(){
    int taka;
    scanf("%d", &taka);
    if(taka >= 100 && taka <= 500){
        printf("I can eat Burger");
    }else if(taka >= 50){
        printf("Rather then I can eat phucka");
    }
    else{
        printf("I can't eat");
    }
    return 0;
}