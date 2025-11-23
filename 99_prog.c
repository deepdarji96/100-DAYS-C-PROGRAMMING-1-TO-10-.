#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char date[20], dd[3], mm[3], yyyy[5], mon[10];

    printf("Enter date (dd/mm/yyyy): ");
    gets(date);

    strncpy(dd, date, 2); dd[2] = '\0';
    strncpy(mm, date + 3, 2); mm[2] = '\0';
    strncpy(yyyy, date + 6, 4); yyyy[4] = '\0';

    char *months[] = {"Jan","Feb","Mar","Apr","May","Jun",
                      "Jul","Aug","Sep","Oct","Nov","Dec"};

    strcpy(mon, months[atoi(mm)-1]);

    printf("%s-%s-%s", dd, mon, yyyy);
    return 0;
}

