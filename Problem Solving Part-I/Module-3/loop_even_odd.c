# include <stdio.h>

int main(){
    for(int i = 1; i <= 10; i++){
       if(i % 2 == 0){
          printf("%d even\n", i);
       }else{
         printf("%d odd\n", i);
       }
    }

    return 0;
}