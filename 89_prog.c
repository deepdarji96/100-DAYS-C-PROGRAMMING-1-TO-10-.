#include <stdio.h>

int main() {
    char s[100], ch;
    int i, count=0;

    printf("Enter a string: ");
    gets(s);

    printf("Enter character to count: ");
    scanf("%c", &ch);

    for(i=0; s[i]!='\0'; i++)
        if(s[i] == ch)
            count++;

    printf("Frequency = %d", count);

    return 0;
}

