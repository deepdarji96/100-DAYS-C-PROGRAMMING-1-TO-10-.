#include <stdio.h>

int main() {
    char s[100];
    int i, j;
    char temp;

    printf("Enter a string: ");
    gets(s);

    for(i = 0; s[i] != '\0'; i++);
    j = i - 1;

    for(i = 0; i < j; i++, j--) {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }

    printf("Reversed: %s", s);

    return 0;
}

