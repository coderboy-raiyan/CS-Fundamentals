# include <stdio.h>

int main(){
    int rahim = 24000;
    char jisun = 'J';
    float fraction = 5.1;
    double maxValue = 22.112233445566778;
    int num1;
    int num2;
    double sum;
    scanf("%d %d", &num1, &num2);
    sum = num1 / num2;
    printf("%0.14lf \n", maxValue);
    printf("Odd : \t %0.2lf \n", sum);
    printf("%d %c %0.2f", rahim, jisun, fraction);
    return 0;
}