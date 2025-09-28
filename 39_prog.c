/* Write a program to find the product of odd digits of a number */

#include <stdio.h>

int main() {
    int num, rem;
    int product = 1;  
    printf("Enter a number: ");
    scanf("%d", &num);

    while(num != 0) {
        rem = num % 10;      
        if(rem % 2 != 0) {   
            product *= rem;
        }
        num = num / 10;      
    }

    printf("Product of odd digits = %d\n", product);
    return 0;
}

