# include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int k, size;
    int num;
    int e = 0, o = 0, mx;
    while (n--)
    {
        scanf("%d", &k);
        size = k;
        while (k--)
        {
            scanf("%d", &num);
            if(num % 2 == 0){
                e++;
            }else{
                o++;
            }
            
        }
    
        if(e > o){
            mx = e;
        }else{
            mx = o;
        }
        if(e == o){
            printf("%d\n", 0);
        }else if(size % 2 != 0){
            printf("%d\n", -1);
        }else{
            printf("%d\n", mx-(size / 2));
        }
        mx=0;
        e = 0;
        o = 0;
    }
    
    return 0;
}