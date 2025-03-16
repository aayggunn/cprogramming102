#include <stdio.h>
#include <string.h>

void printReverse(char*);

int main() {
    char message[100];

    puts("Enter a sentence:");
    gets(message);

    printReverse(message);

    return 0;
}

void printReverse(char* ptr) {
    int i, length;
    length = strlen(ptr);

    for (i = length - 1; i >= 0; i--) {
        putchar(*(ptr + i)); 
    }
    putchar('\n');
}
