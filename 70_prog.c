#include <stdio.h>

int main() {
    int n, arr[100], i, max1=-9999, max2=-9999;
    scanf("%d",&n);
    for(i=0;i<n;i++) scanf("%d",&arr[i]);

    for(i=0;i<n;i++){
        if(arr[i]>max1){
            max2=max1;
            max1=arr[i];
        }
        else if(arr[i]>max2 && arr[i]!=max1){
            max2=arr[i];
        }
    }

    printf("Second largest = %d", max2);
}

