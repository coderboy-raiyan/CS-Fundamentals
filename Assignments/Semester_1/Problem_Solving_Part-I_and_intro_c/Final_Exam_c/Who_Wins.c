# include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int tigerPoint = 0, pathanPoint = 0;
    int tiger, pathan;
    while (n--)
    {
       scanf("%d %d", &tiger, &pathan);
       if(tiger > pathan){
            tigerPoint++;
       }else if(pathan > tiger){
            pathanPoint++;
       }else{
         tigerPoint++;
         pathanPoint++;
       }
    }
    if(tigerPoint > pathanPoint){
        printf("Tiger");
    }else if(pathanPoint > tigerPoint){
        printf("Pathan");
    }else{
        printf("Draw");
    }
    return 0;
}