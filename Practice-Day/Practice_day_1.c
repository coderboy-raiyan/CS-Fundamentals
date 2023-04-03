# include <stdio.h>

int main(){
    // Problem 1

    printf("Recently I heard that you’ve achieved 95% marks in your exam \n");
    printf("This is brilliant!\n");
    printf("I wish you’ll shine in your life!\t Good luck with all the barriers(/\\) in \nyour lif\n");
    // problem 2

    int a;
    int b;
    scanf("%d %d", &a, &b);
    float division = a * 1.0 / b;
    printf("%d / %d = %0.2f\n", a, b, division );
    int sum = a + b;
    printf("%d + %d = %d\n", a, b, sum);
    int subtraction = a - b;
    printf("%d - %d = %d\n", a, b, subtraction);
    int multiplication = a * b;
    printf("%d * %d = %d\n", a, b, multiplication);

    // problem 3

    int val;
    scanf("%d", &val);
   if(val >= 0){
     if(val % 2 == 0){
        printf("even");
    }else{
        printf("odd");
    }
   }else{
    printf("Please enter a positive value");
   }

    // Problem - 4

    int val;
    scanf("%d", &val);
    if(val > 0){
        printf("positive");
    }else if(val < 0){
        printf("negative");
    }else{
        printf("zero");
    }


    // Problem - 4

    int taka;
    scanf("%d", &taka);
    if(taka >= 10000){
        printf("Gucci Bag\n");
        if(taka > 20000){
            printf("Gucci Belt");
        }
    }else if(taka >= 5000){
        printf("Levis Bag");
    }else{
        printf("Something from New Market");
    }
    return 0;
}