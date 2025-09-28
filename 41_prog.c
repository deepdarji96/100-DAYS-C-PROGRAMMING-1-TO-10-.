/*Write a program to swap the first and last digit of a number */

#include <stdio.h>
#include <math.h>

int main() {
    int num, temp, digits = 0, first, last, result;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
    last = temp % 10;  

    
    while(temp != 0) {
        temp = temp / 10;
        digits++;
    }

    first = num / pow(10, digits - 1);  

    
    result = num % (int)pow(10, digits - 1);  
    result = result / 10;  

    
    result = last * pow(10, digits - 1) + result * 10 + first;

    printf("Number after swapping first and last digit = %d\n", result);
    return 0;
}

