#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    long file_size;
    char buffer[100];

    file = fopen("example.txt", "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    long initial_position = ftell(file);
    printf("Initial position of the file pointer: %ld\n", initial_position);

    fseek(file, 0, SEEK_END);

    long end_position = ftell(file);
    printf("Position of the file pointer at the end: %ld\n", end_position);

    file_size = end_position - initial_position;
    printf("File size: %ld bytes\n", file_size);

    rewind(file);

    long rewind_position = ftell(file);
    printf("Position of the file pointer after rewind: %ld\n", rewind_position);

    fgets(buffer, sizeof(buffer), file);
    printf("First line of the file: %s", buffer);

    fseek(file, 10, SEEK_SET);

    fgets(buffer, sizeof(buffer), file);
    printf("Content starting from the 10th byte: %s", buffer);

    fclose(file);

    return 0;
}
