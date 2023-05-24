# include <stdio.h>

int main(){
    long long int eye, mouth, body, count=0;
    scanf("%lld %lld %lld", &eye, &mouth, &body);

    if(eye <= 0 || body <= 0){
        printf("%d", 0);
        return 0;
    }

    long long int min = eye;

    if(mouth < min){
        min = mouth;
    }
    if(body < min){
        min = body;
    }

    mouth-=min;
    eye-=min;
    body-=min;

    count+=min;

    if(eye / 2 < body){
        count+=eye/2;
    }else{
        count+=body;
    }

    printf("%lld", count);
    
    return 0;
}