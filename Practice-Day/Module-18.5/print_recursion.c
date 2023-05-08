# include <stdio.h>

void fun(int n){
   if(n <= 0){
    return; 
   }
   printf("I love recursion\n");
   fun(--n); // --n -> it updates here btw n-- will update on the next line
}

int main(){
    int n;
    scanf("%d", &n);
    fun(n);
}
