#include <stdio.h>
#include <string.h>

struct DataStruct {
    int i;
    float f;
    char str[20];
};

union DataUnion {
    int i;
    float f;
    char str[20];
};

int main() {

    struct DataStruct myStruct;
    union DataUnion myUnion;

    printf("Size of struct DataStruct: %lu bytes\n", sizeof(myStruct));
    printf("Size of union DataUnion: %lu bytes\n", sizeof(myUnion));

    myStruct.i = 10;
    myStruct.f = 3.14;
    strcpy(myStruct.str, "Hello Struct");

    printf("\nStruct values:\n");
    printf("myStruct.i: %d\n", myStruct.i);
    printf("myStruct.f: %.2f\n", myStruct.f);
    printf("myStruct.str: %s\n", myStruct.str);

    myUnion.i = 20;
    printf("\nUnion values after assigning myUnion.i:\n");
    printf("myUnion.i: %d\n", myUnion.i);
    printf("myUnion.f: %.2f\n", myUnion.f);
    printf("myUnion.str: %s\n", myUnion.str);

    myUnion.f = 6.28;
    printf("\nUnion values after assigning myUnion.f:\n");
    printf("myUnion.i: %d\n", myUnion.i);
    printf("myUnion.f: %.2f\n", myUnion.f);
    printf("myUnion.str: %s\n", myUnion.str);

    strcpy(myUnion.str, "Hello Union");
    printf("\nUnion values after assigning myUnion.str:\n");
    printf("myUnion.i: %d\n", myUnion.i);
    printf("myUnion.f: %.2f\n", myUnion.f);
    printf("myUnion.str: %s\n", myUnion.str);

    return 0;
}
