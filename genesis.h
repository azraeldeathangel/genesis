#ifndef GENESIS_LIBRARY_H
#define GENESIS_LIBRARY_H

#include <stdio.h>
#include <string.h>

void gdate(int month, int date, int year) {
    const char* months[] = {"January", "February", "March", "April", "May", "June",
                            "July", "August", "September", "October", "November", "December"};
    if (month < 1 || month > 12) {
        printf("Invalid month\n");
        return;
    }
    printf("Converted date: %s %d %d\n", months[month - 1], date, year);
}

void gupper(char *string) {
    int size = strlen(string);

    for (int i = 0; i < size; i++) {
        if (string[i] >= 'a' && string[i] <= 'z') {
            string[i] = string[i] - ('a' - 'A');
        }
    }
}

int glen(const char *string) {
    int i = 0;
    while (string[i] != '\0') {
        i++;
    }
    return i;
}

char* gcpy(char *destination, const char *source) {
    char *ptr = destination;
    while (*source != '\0') {
        *destination++ = *source++;
    }
    *destination = '\0';
    return ptr;
}

#endif // GENESIS_LIBRARY_H
