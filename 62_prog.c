#include <stdio.h>

int main() {
    int n, key, i, arr[100];
    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter array: ");
    for(i=0;i<n;i++) scanf("%d", &arr[i]);

    printf("Enter element to search: ");
    scanf("%d", &key);

    for(i=0;i<n;i++){
        if(arr[i]==key){
            printf("Found at index %d", i);
            return 0;
        }
    }
    printf("Not found");
}

