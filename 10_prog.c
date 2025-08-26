/*Write a program to input time in seconds and convert it to hours:minutes:seconds format*/

#include <stdio.h>

int main() {

int T,H,S,M;
printf("enter your time in seconds: ");
scanf("%d", &T);


H = T/3600;
M = (T%3600)/60;
S = T%60;

printf("time : %.2d:%.2d:%.2d\n",H,M,S);

return 0;
}


