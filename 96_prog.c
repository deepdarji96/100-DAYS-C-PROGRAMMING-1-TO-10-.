#include <stdio.h>
#include <string.h>

void rev(char *s, int l, int r) {
    while(l < r) {
        char tmp = s[l];
        s[l] = s[r];
        s[r] = tmp;
        l++; r--;
    }
}

int main() {
    char str[200];
    int i = 0, start = 0;

    printf("Enter sentence: ");
    gets(str);

    while(1) {
        if(str[i] == ' ' || str[i] == '\0') {
            rev(str, start, i - 1);
            start = i + 1;
        }
        if(str[i] == '\0') break;
        i++;
    }

    printf("Reversed words: %s", str);
    return 0;
}

