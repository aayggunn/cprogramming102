#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	
	int x=7;
	int* ptr=&x;
	
	printf("x variable: %d\n", x);
	printf("x variable address: %x\n", &x);
	printf("x variable address: %x\n", ptr);
	printf("ptr variable address: %x\n", &ptr);
	printf("x variable: %d\n", *ptr);
	
	return 0;
}
