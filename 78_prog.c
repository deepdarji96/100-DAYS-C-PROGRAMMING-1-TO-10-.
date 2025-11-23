#include <stdio.h>

int main() {
    int n, a[10][10], i, j, freq[1000]={0}, d;
    scanf("%d",&n);

    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);

    for(i=0;i<n;i++){
        d = a[i][i];
        freq[d]++;
        if(freq[d] > 1){
            printf("Not Distinct");
            return 0;
        }
    }

    printf("Distinct");
}

