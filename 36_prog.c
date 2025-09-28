/*Write a program to find the LCM of two numbers */

#include <stdio.h>

int main() {
    int a, b, max, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    max = (a > b) ? a : b;  // start from the bigger number

    while(1) {
        if(max % a == 0 && max % b == 0) { // divisible by both
            lcm = max;
            break;
        }
        max++;
    }

    printf("LCM of %d and %d = %d\n", a, b, lcm);
    return 0;
}

