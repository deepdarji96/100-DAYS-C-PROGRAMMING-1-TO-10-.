#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int freq[26] = {0}, i;

    printf("Enter string: ");
    gets(str);

    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] >= 'a' && str[i] <= 'z') {
            freq[str[i] - 'a']++;
            if(freq[str[i] - 'a'] == 2) {
                printf("First repeating lowercase letter: %c", str[i]);
                return 0;
            }
        }
    }

    printf("No repeating lowercase letter");
    return 0;
}

