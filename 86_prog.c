#include <stdio.h>

int main() {
    char s[100];
    int i, j, flag = 1;

    printf("Enter a string: ");
    gets(s);

    for(i = 0; s[i] != '\0'; i++);
    j = i - 1;

    for(i = 0; i < j; i++, j--) {
        if(s[i] != s[j]) {
            flag = 0;
            break;
        }
    }

    if(flag) printf("Palindrome");
    else printf("Not Palindrome");

    return 0;
}

