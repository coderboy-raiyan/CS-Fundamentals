# include <stdio.h>
# include <math.h>

// O(n) -> takes more time
// int main ()
// {
//     int n;
//     scanf("%d", &n);

//     for (int i = 1; i <= n; i++)
//     {
//         if(n % i == 0){
//             printf("%d\n", i);
//         }
//     }
    
//     return 0;
// }

int main(){
    int n, i = 2, j, limit;
    scanf("%d", &n);
    limit = (int)sqrt(n);
    printf("%d\n", 1);
    while (i <= limit)
    {
       j = 1;
       int temp;
       while (j <= 10)
       {
        if(i * j == n){
            if(j == i){
                printf("%d\n", i);
            }else{
                printf("%d\n%d\n", i, j);
                
            }
        }
        j++;
       }
       i++;
    }
    if(n > 10 && n < 100){
        printf("%d\n", j-1);
    }
     printf("%d\n", n);
    return 0;
}