/*Write a program to assign grades based on a percentage input*/

#include <stdio.h>

int main() {
    int per;

    printf("Enter your percentage: ");
    scanf("%d", &per);

    if (per >= 90) {
        printf("Grade: A\n");
    }
    else if (per >= 75) {
        printf("Grade: B\n");
    }
    else if (per >= 50) {
        printf("Grade: C\n");
    }
    else if (per >= 35) {
        printf("Grade: D\n");
    }
    else {
        printf("Grade: F (Fail)\n");
    }

    return 0;
}

