/*write a programme to calculate the area and perimeter of a rectangle given its lenght and breath*/
#include <stdio.h>
int main(){

int area;
int perimeter;
int lenght;
int breath;

printf("enter length of rectangle : ");
scanf("%d",&lenght);

printf("enter breath of rectangle : ");
scanf("%d" , &breath);

area=lenght*breath;
perimeter=2*(lenght+breath);

printf("area: %d\nperimeter: %d\n",area,perimeter);


return 0;

}

