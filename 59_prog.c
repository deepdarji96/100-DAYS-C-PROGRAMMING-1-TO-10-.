#include <stdio.h>

int main() {
    int n, i, a[100], even = 0, odd = 0;
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        if (a[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("Even numbers: %d\n", even);
    printf("Odd numbers: %d\n", odd);

    return 0;
}

