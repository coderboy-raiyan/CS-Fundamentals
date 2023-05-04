# include <stdio.h>

void printAll(int n){
   for (int i = 1; i <= n; i++)
   {
        if(i < n){
            printf("%d ", i);
        }else{
            printf("%d", i);
        }
   }
   
}

int main(){
    int n;
    scanf("%d", &n);
    printAll(n);
    return 0;
}