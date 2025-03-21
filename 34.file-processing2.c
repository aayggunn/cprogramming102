#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char buffer[100];
    int number;

    // 1. Open a text file in read mode
    file = fopen("example.txt", "r");
    if (file == NULL) {
        printf("Error opening text file!\n");
        return 1;
    }

    // 2. Read a line from the file using fgets
    fgets(buffer, sizeof(buffer), file);
    printf("Read from file using fgets: %s", buffer);

    // 3. Read formatted data from the file using fscanf
    fscanf(file, "%d", &number);
    printf("Read from file using fscanf: %d\n", number);

    // 4. Close the text file
    fclose(file);

    // 5. Open a binary file in read mode
    file = fopen("example.bin", "rb");
    if (file == NULL) {
        printf("Error opening binary file!\n");
        return 1;
    }

    // 6. Read data from the binary file using fread
    char binary_data[100];
    fread(binary_data, sizeof(char), sizeof(binary_data), file);
    printf("Read from binary file using fread: %s\n", binary_data);

    // 7. Close the binary file
    fclose(file);

    return 0;
}
