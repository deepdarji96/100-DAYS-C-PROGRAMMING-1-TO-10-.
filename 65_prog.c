#include <stdio.h>

int main() {
    int num, freq[10]={0}, d, max=0, ans=0;
    scanf("%d",&num);

    while(num>0){
        d=num%10;
        freq[d]++;
        num/=10;
    }

    for(int i=0;i<10;i++)
        if(freq[i]>max){
            max=freq[i];
            ans=i;
        }

    printf("Most frequent digit = %d", ans);
}

