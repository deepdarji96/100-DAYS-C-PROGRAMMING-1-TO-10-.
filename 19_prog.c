/*Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths*/

#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter three sides of the triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    
    if (a + b > c && a + c > b && b + c > a) {
        if (a == b && b == c) {
            printf("It is an EQUILATERAL triangle.\n");
        }
        else if (a == b || b == c || a == c) {
            printf("It is an ISOSCELES triangle.\n");
        }
        else {
            printf("It is a SCALENE triangle.\n");
        }
    }
    else {
        printf("Not a valid triangle.\n");
    }

    return 0;
}

