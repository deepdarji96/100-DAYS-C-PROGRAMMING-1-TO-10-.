/* write a programme to calculate the area and circumference of a circle given its radius*/

#include <stdio.h> 
int main() {

int area;
int circumference;
int radius;

printf("enter radius: ");
scanf("%d" , &radius);

area= (22/7)*radius*radius;
circumference= 2*(22/7)*radius;
printf("area:%d\ncircumference:%d\n", area,circumference);

return 0;
} 


