#include <stdio.h>

int main() {
    int n, arr[100], key, l=0, r, mid;
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    scanf("%d",&key);

    r = n-1;
    while(l<=r){
        mid=(l+r)/2;
        if(arr[mid]==key){ printf("Found at %d", mid); return 0; }
        else if(arr[mid]<key) l=mid+1;
        else r=mid-1;
    }
    printf("Not found");
}

