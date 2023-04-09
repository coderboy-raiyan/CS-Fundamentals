# include <stdio.h>

// Problem - Way 1
int main(){
    int x;
    int correct = 1999;
     do{
        scanf("%d", &x);

        if(x == correct){
            printf("Correct\n");
            break;
        }else{
            printf("Wrong\n");
        }

     }while(x);
    
    return 0;
}

// Problem - Way 2
# include <stdio.h>

int main(){
    int n;
    int correct = 1999;
    while (scanf("%d", &n) != EOF) //EOF -> means end of File
    {
         if(n == correct){
            printf("Correct\n");
            break;
        }else{
            printf("Wrong\n");
        }
    }
    
    return 0;
}