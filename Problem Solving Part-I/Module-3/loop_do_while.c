
# include <stdio.h>

int main(){
   int n;
   int i;

   scanf("%d %d", &i,&n);

  do{
    printf("%d\n", i);
    i++;
  }while(i <= n);

    return 0;
}