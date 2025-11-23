#include <stdio.h>

int main() {
    int r, c, a[10][10], sum = 0, i, j;
    scanf("%d %d", &r, &c);

    for(i=0;i<r;i++)
        for(j=0;j<c;j++){
            scanf("%d", &a[i][j]);
            sum += a[i][j];
        }

    printf("Sum = %d", sum);
}

