# include <stdio.h>

int main(){
    char a[100], b[100];
    scanf("%s %s", a,b);
    int i = 0;
    while (1)
    {
        if(a[i] == '\0' && b[i] == '\0'){
            printf("a and b is Equal");
            break;
        }else if(a[i] == '\0'){
            printf("a is smaller");
            break;
        }else if(b[i] == '\0'){
            printf("b is smaller");
            break;
        }

        if(a[i] == b[i]){
            i++;
        }
        else if(a[i] < b[i]){
            printf("a is smaller");
            break;
        }else{
            printf("b is smaller");
            break;
        }
        

    }
    
    return 0;
}