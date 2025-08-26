/*write a propgramme to input two numbers and display their sum,difference,product and quotient*/

#include <stdio.h>
int main() {

int a;
int b;
int sum;
int sub;
int product;
float quotient;

printf("enter your first number: ");
scanf("%d", &a);

printf("enter your second number: ");
scanf("%d" , &b);

sum=a+b;
sub=a-b;
product=a*b;
quotient=a/b;


printf("sum of numbers: %d\ndifference of two numbers: %d\nproduct of two numbers: %d\nquotient of two numbers: %f\n",sum,sub,product,quotient);

return 0;
}











