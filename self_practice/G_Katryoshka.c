# include <stdio.h>

int main(){
    int eyes, mouth, body, total = 0;
    scanf("%d %d %d", &eyes, &mouth, &body);
    if(eyes == 0 || body == 0){
        printf("%d", 0);
        return 0;
    }
    int min = eyes;
    if(body < min){
        min = body;
    }
    if(mouth < min){
        min = mouth;
    }
    eyes-=min;
    body-=min;
    mouth-=min;
    
    total+=min;

    if(eyes / 2 < body){
        total+=(eyes/2);
    }else{
        total+=body;
    }

    printf("%d %d %d\n", eyes, mouth, body);
    printf("%d", total);
    return 0;
}