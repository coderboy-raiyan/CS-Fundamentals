#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

     int a; 
    int b;
    
    scanf("%d %d", &a, &b);
    
    if(a >= b){
        printf("YES");
    }else{
        printf("NO");
    }
    
    return 0;
}
