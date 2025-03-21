#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *file;
    char buffer[100];

    // Open a file in write mode
    file = fopen("example.txt", "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Write a string to the file using fputs
    fputs("Hello, World!\n", file);

    // Write formatted data to the file using fprintf
    fprintf(file, "This is a number: %d\n", 42);

    // Close the file
    fclose(file);

    // Open the file in read mode
    file = fopen("example.txt", "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Read a line from the file using fgets
    fgets(buffer, sizeof(buffer), file);
    printf("Read from file using fgets: %s", buffer);

    // Read formatted data from the file using fscanf
    int number;
    fscanf(file, "This is a number: %d\n", &number);
    printf("Read from file using fscanf: %d\n", number);

    // Close the file
    fclose(file);

    // Open a binary file in write mode
    file = fopen("example.bin", "wb");
    if (file == NULL) {
        printf("Error opening binary file!\n");
        return 1;
    }

    // Write data to the binary file using fwrite
    char data[] = "Binary data";
    fwrite(data, sizeof(char), sizeof(data), file);

    // Close the file
    fclose(file);

    // Open the binary file in read mode
    file = fopen("example.bin", "rb");
    if (file == NULL) {
        printf("Error opening binary file!\n");
        return 1;
    }

    // Read data from the binary file using fread
    char read_data[sizeof(data)];
    fread(read_data, sizeof(char), sizeof(data), file);
    printf("Read from binary file using fread: %s\n", read_data);

    // Close the file
    fclose(file);

    return 0;
}
