#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	
	char name='A';
	double y=3.1415;
	int x=5;
	
	char* nameptr=&name;
	double* yptr=&y;
	int* xptr=&x;
	
	printf("First Adresses\n\n");
	
	printf("name's first address: %x \t value: %c \n", nameptr, *nameptr);
	printf("x's first address: %x \t value: %d \n", xptr, *xptr);
	printf("y's first address: %x \t value: %f\n\n", yptr, *yptr);
	
	nameptr++;
	xptr+=3;
	yptr-=2;
	
	printf("Next Adresses:\n\n");
	
	printf("name's next address: %x \t value: %c \n", nameptr, *nameptr);
	printf("x's next address: %x \t value: %d \n", xptr, *xptr);
	printf("y's next address: %x \t value: %f\n", yptr, *yptr);
	
	return 0;
}
