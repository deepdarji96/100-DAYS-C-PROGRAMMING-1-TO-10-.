#include <stdio.h>

int main() {
    int n, arr[100], pos, x, i;
    scanf("%d",&n);
    for(i=0;i<n;i++) scanf("%d",&arr[i]);

    scanf("%d %d",&x,&pos); // value, position

    for(i=n;i>pos;i--) arr[i]=arr[i-1];
    arr[pos]=x;

    for(i=0;i<=n;i++) printf("%d ", arr[i]);
}

