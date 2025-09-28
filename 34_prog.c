/*Write a program to check if a number is prime */
#include <stdio.h>

int main() {
    int num, i;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(num <= 1) {
        printf("%d is not prime\n", num);
        return 0;
    }

    for(i = 2; i <= num / 2; i++) {
        if(num % i == 0) {
            printf("%d is not prime\n", num);
            return 0; 
        }
    }

    printf("%d is prime\n", num);
    return 0;
}

