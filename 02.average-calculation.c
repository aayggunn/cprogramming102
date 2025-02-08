#include <stdio.h>
#include <stdlib.h>

int main() {
	double average=0, numbers[5];
	
	printf("Enter 5 numbers: \n");
	scanf("%lf%lf%lf%lf%lf", &numbers[0], &numbers[1], &numbers[2], &numbers[3], &numbers[4]);
	
	average = (numbers[0] + numbers[1] + numbers[2] + numbers[3] + numbers[4])/5;
	printf("Average: %.2lf", average);
	
	return 0;
}
