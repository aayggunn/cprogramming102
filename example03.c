#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void upperToLower(char*);
void lowerToUpper(char*);

int main() {
    char message[100];
    int choice;

    puts("Make a choice:");
    puts("1- Convert uppercase to lowercase");
    puts("2- Convert lowercase to uppercase");
    scanf("%d", &choice);
    getchar();

    switch(choice) {
        case 1:
            puts("Enter a sentence in uppercase:");
            gets(message);
            upperToLower(message);
            puts("Converted sentence:");
            puts(message);
            break;
        case 2:
            puts("Enter a sentence in lowercase:");
            gets(message);
            lowerToUpper(message);
            puts("Converted sentence:");
            puts(message);
            break;
        default:
            puts("Invalid choice");
    }

    return 0;
}

void upperToLower(char* ptr) {
    while (*ptr != '\0') {
        if (*ptr >= 'A' && *ptr <= 'Z') {
            *ptr = *ptr + 32; 
        }
        ptr++;
    }
}

void lowerToUpper(char* ptr) {
    while (*ptr != '\0') {
        if (*ptr >= 'a' && *ptr <= 'z') {
            *ptr = *ptr - 32;
        }
        ptr++;
    }
}
