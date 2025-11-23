#include <stdio.h>
#include <string.h>

int main() {
    char str[100], res[100];
    int i, j = 0;

    printf("Enter a string: ");
    gets(str);

    for(i = 0; str[i] != '\0'; i++) {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||
           str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U') {
            continue;
        }
        res[j++] = str[i];
    }

    res[j] = '\0';

    printf("String without vowels: %s", res);
    return 0;
}

