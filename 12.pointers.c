#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	
	int x=7;
	float y=2.71;
	double z=3625.46387;
	char name ='A';
	
	printf("address of x is: %x\n", &x);
	printf("address of y is: %x\n", &y);
	printf("address of z is: %x\n", &z);
	printf("address of name is: %x\n", &name);
	
	return 0;
}
