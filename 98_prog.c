#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    int i;

    printf("Enter full name: ");
    gets(name);

    printf("%c. ", name[0]);

    for(i = 1; name[i] != '\0'; i++) {
        if(name[i] == ' ' && name[i+1] != '\0') {
            printf("%c. ", name[i+1]);
        }
    }

    for(i = strlen(name)-1; i >= 0; i--) {
        if(name[i] == ' ') {
            printf("%s", &name[i+1]);
            break;
        }
    }

    return 0;
}

