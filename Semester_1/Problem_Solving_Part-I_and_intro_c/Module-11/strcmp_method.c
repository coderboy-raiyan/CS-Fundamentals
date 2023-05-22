# include <stdio.h>
# include <string.h>

int main(){
    char a[100], b[100];
    scanf("%s %s", a,b);
    int compare = strcmp(a,b);
    if(compare > 0){
        printf("b is smaller");
    }else if (compare < 0)
    {
        printf("a is smaller");
    }else{
        printf("a and b is equal");
    }
    
    return 0;
}