#include <stdio.h>

int main() {
    int n, arr[100], x, i;
    scanf("%d",&n);
    for(i=0;i<n;i++) scanf("%d",&arr[i]);
    scanf("%d",&x);

    int pos=n;
    for(i=0;i<n;i++)
        if(arr[i]>x){ pos=i; break; }

    for(i=n;i>pos;i--) arr[i]=arr[i-1];
    arr[pos]=x;

    for(i=0;i<=n;i++) printf("%d ", arr[i]);
}

