#include <stdio.h>

int main() {
    int n, k, arr[100], temp[100], i;
    scanf("%d",&n);
    for(i=0;i<n;i++) scanf("%d",&arr[i]);
    scanf("%d",&k);

    k = k % n;

    for(i=0;i<n;i++)
        temp[(i+k)%n] = arr[i];

    for(i=0;i<n;i++)
        printf("%d ", temp[i]);
}

