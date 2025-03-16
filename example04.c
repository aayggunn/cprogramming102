#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void summary(char*);

int main() {
    char message[100];
    puts("Enter a sentence:");
    gets(message); 
    summary(message); 
    return 0;
}

void summary(char* ptr) {
    int i = 0;

    while (*(ptr + i) != '\0') { 
        if (i == 0) {
            putchar(*ptr ); 
        }
        if (*(ptr + i) == ' ') {
            putchar(*(ptr + i + 1 ));
        }
        i++;
    }
}
