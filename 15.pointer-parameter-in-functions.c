#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double getSquare(double *ptr);

int main() {
	
	double number, result;
	
	printf("Enter a number:");
	scanf("%lf", &number);
	
	result=getSquare(&number);
	
	printf("Square of number: %.2lf\n\n", result);
	
	return 0;
}

double getSquare(double *ptr){
	return *ptr * *ptr;
}
