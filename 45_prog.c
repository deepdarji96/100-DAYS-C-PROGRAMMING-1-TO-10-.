/*Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms. */


#include <stdio.h>

int main() {
    int n, i;
    double sum = 0.0;
    int numerator, denominator = 3;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        numerator = 2 * i;       
        sum += (double)numerator / denominator;
        denominator += 4;         
    }

    printf("Sum of series = %.2lf\n", sum);
    return 0;
}

