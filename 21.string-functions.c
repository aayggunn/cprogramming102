#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char str1[] = "Hello";
    int len1 = strlen(str1);
    printf("str1: %s, Length: %d\n", str1, len1);

    char str2[20];
    strcpy(str2, str1);
    printf("Copied using strcpy: str2: %s\n", str2);

    char str3[] = " World!";
    strcat(str2, str3);
    printf("Concatenated using strcat: str2: %s\n", str2);

    char str4[] = "Hello";
    char str5[] = "Hello World!";
    int cmpResult = strcmp(str1, str4);
    if (cmpResult == 0) {
        printf("str1 and str4 are the same.\n");
    } else {
        printf("str1 and str4 are different.\n");
    }

    cmpResult = strcmp(str1, str5);
    if (cmpResult == 0) {
        printf("str1 and str5 are the same.\n");
    } else {
        printf("str1 and str5 are different.\n");
    }

    printf("Size of str1 (sizeof): %lu bytes\n", sizeof(str1));
    printf("Size of str2 (sizeof): %lu bytes\n", sizeof(str2));

    char *foundChar = strchr(str1, 'e');
    if (foundChar != NULL) {
        printf("Found 'e' in str1: %s\n", foundChar);
    } else {
        printf("'e' not found in str1.\n");
    }

    char *foundStr = strstr(str2, "World");
    if (foundStr != NULL) {
        printf("Found 'World' in str2: %s\n", foundStr);
    } else {
        printf("'World' not found in str2.\n");
    }

    char str6[20] = "Hello World!";
    printf("Before memset: str6: %s\n", str6);
    memset(str6, '*', 5);
    printf("After memset: str6: %s\n", str6);

    char *dynamicStr = (char *)malloc(50 * sizeof(char));
    if (dynamicStr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }
    strcpy(dynamicStr, "Dynamic memory example");
    printf("dynamicStr: %s\n", dynamicStr);
    free(dynamicStr);

    return 0;
}
