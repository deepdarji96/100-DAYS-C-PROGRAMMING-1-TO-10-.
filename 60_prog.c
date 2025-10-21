#include <stdio.h>

int main() {
    int n, i, a[100], pos = 0, neg = 0, zero = 0;
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        if (a[i] > 0)
            pos++;
        else if (a[i] < 0)
            neg++;
        else
            zero++;
    }

    printf("Positive numbers: %d\n", pos);
    printf("Negative numbers: %d\n", neg);
    printf("Zeros: %d\n", zero);

    return 0;
}

