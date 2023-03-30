#include <stdio.h>

int main(){
    int a;
    int b;
    int sum;
    a = 50;
    b = 60;
    sum = a+b;
    printf("Sum is %d", sum);
    return 0;
}

int main() {
  int n;
  double x;
  x = 10.4;
  n = (int)x;
  printf("Value of n is %d\n", n);
  printf("value of x is %lf\n", x);
  return 0;
}
/*
 1 byte = 8 bit, You can Only store 2 numbers in one bit. So if I told you how much number we can store on 32 bit the answer is very simple : 2 ^ 32 
*/

int main()  
 {  
     int a;  
     a = 1000;  
     printf("Value of a is %d\n", a);  
     a = -21000;  
     printf("Value of a is %d\n", a);  
     a = 10000000;  
     printf("Value of a is %d\n", a);  
     a = -10000000;  
     printf("Value of a is %d\n", a);  
     a = 100020004000503;  
     printf("Value of a is %d\n", a);  
     a = -4325987632;  
     printf("Value of a is %d\n", a);  
     return 0;  
 }


  int main()  
 {  
     double a,b,sum;
     a = 10.69;
     b = 20.34;
     sum = a + b;
     printf("sum of these %lf\n", sum);
     printf("sum of these %0.2lf\n", sum);
     return 0;
 } 


 int main()  
 {  
  char name;
  printf("first letter of my name is : ");
  scanf("%c", &name);
  printf("Here is the result %c", name);
  return 0;
 } 



 int main()  
 {  
 	char sign;
 	double num1, num2, value;
    scanf("%lf",  &num1);
    scanf("%lf", &num2);
    sign = "+";
   	value = num1 + num2;
    printf("%lf %c %lf %lf\n", num1, sign, num2, value);
     sign = "-";
   	value = num1 - num2;
    printf("%lf %c %lf %lf\n", num1, sign, num2, value);
    sign = "*";
   	value = num1 * num2;
    printf("%lf %c %lf %lf\n ", num1, sign, num2, value);
    sign = "/";
   	value = num1 / num2;
    printf("%lf %c %lf %lf\n", num1, sign, num2, value);
 } 