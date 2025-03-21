#include <stdio.h>

// Define a macro
#define PI 3.14159
#define SQUARE(x) ((x) * (x))
#define MAX(a, b) ((a) > (b) ? (a) : (b))

// Conditional compilation using #ifdef, #ifndef, #if, #else, #elif, #endif
#define DEBUG 1
#define VERSION 2

// Undefine a macro
#undef PI

// Redefine PI with a new value
#define PI 3.14

// Use #ifdef to check if DEBUG is defined
#ifdef DEBUG
    #define LOG(message) printf("DEBUG: %s\n", message)
#else
    #define LOG(message)
#endif

// Use #ifndef to check if a macro is not defined
#ifndef RELEASE
    #define RELEASE 1
#endif

// Use #if and #elif for conditional compilation
#if VERSION == 1
    #define VERSION_NAME "Version 1.0"
#elif VERSION == 2
    #define VERSION_NAME "Version 2.0"
#else
    #define VERSION_NAME "Unknown Version"
#endif

// Use #error to generate a compilation error
#if !defined(PI)
    #error "PI is not defined!"
#endif

// Use #pragma to give a message to the compiler
#pragma message("Compiling with standard settings...")

// Use #line to change the line number and file name
#line 100 "custom_file.c"

// Function to demonstrate macros
void print_info() {
    printf("PI: %.2f\n", PI);
    printf("Square of 5: %d\n", SQUARE(5));
    printf("Max of 10 and 20: %d\n", MAX(10, 20));
    LOG("This is a debug message.");
    printf("Version: %s\n", VERSION_NAME);
    printf("Release: %d\n", RELEASE);
}

int main() {
    // Print custom line and file information
    printf("Current line: %d, File: %s\n", __LINE__, __FILE__);

    // Call the function
    print_info();

    // Use #undef to undefine a macro
    #undef RELEASE

    // Check if RELEASE is undefined
    #ifndef RELEASE
        printf("RELEASE is undefined now.\n");
    #endif

    // Use #line to reset the line number and file name
    #line 200 "main.c"
    printf("Current line: %d, File: %s\n", __LINE__, __FILE__);

    return 0;
}
