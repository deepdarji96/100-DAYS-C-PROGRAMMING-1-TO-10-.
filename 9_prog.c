/*Write a program to calculate simple and compound interest for given principal, rate, and time*/

#include <stdio.h>
#include <math.h>

int main() {

int SI,P,R,T,CI;
printf("enter P: ");
scanf("%d",&P);

printf("enter R: ");
scanf("%d",&R);

printf("enter T: ");
scanf("%d",&T);

SI =  (P * R * T) / 100;
CI =  P*pow((1+R/100),T)-P;
printf("your SI AND CI: %d,%d",SI,CI);

return 0;
}
