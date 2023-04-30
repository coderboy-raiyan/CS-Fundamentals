# include <stdio.h>
# include <math.h>
int main(){
    double x;
    scanf("%lf", &x);
    printf("%0.2lf\n", ceil(x));
    printf("%0.2lf\n", floor(x));

    int a;
    scanf("%d", &a);
    double ans = sqrt(a);
    printf("%lf", ans);

    int a,b;
    scanf("%d %d", &a, &b);
    int ans = pow(a,b);
    printf("%d", ans);
    
    return 0;
}