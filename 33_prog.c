/*Write a program to check if a number is an Armstrong number */


#include <stdio.h>
#include <math.h>

int main() {
    int num, temp, rem, sum = 0, digits = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    
    while(temp != 0) {
        temp = temp / 10;
        digits++;
    }

    temp = num;

    
    while(temp != 0) {
        rem = temp % 10;
        sum += pow(rem, digits);
        temp = temp / 10;
    }

    if(sum == num)
        printf("%d is an Armstrong number\n", num);
    else
        printf("%d is not an Armstrong number\n", num);

    return 0;
}

