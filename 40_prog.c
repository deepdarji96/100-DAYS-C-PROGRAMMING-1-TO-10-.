/*Write a program to find the 1’s complement of a binary number and print it */

#include <stdio.h>

int main() {
    int n, rem;
    long binary, onesComp = 0, place = 1;

    printf("Enter a binary number: ");
    scanf("%ld", &binary);

    n = binary;

    while(n != 0) {
        rem = n % 10;
        if(rem == 0)
            rem = 1;
        else
            rem = 0;

        onesComp = onesComp + rem * place;
        place *= 10;
        n = n / 10;
    }

    printf("1's complement = %ld\n", onesComp);
    return 0;
}

