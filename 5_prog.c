/* write a programme to convert temperature from celsius to fahrenheit*/

#include <stdio.h>
int main () {

float c;
float f;
printf("enter your temperature in celsius: ");
scanf("%f" , &c);
f = (c*9/5)+35;
printf("temperayure in fahrenheit: %f\n",f);

return 0 ;
}

