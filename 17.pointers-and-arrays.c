#include <stdio.h>
#include <stdlib.h>


int main() {
	
	char myLetters[7] = {'a', 'b', 'c', 'd', 'e', 'f', 'g'};
	
	printf("Address of the first element: %x\n", &myLetters[0]);
	printf("Address of the first element: %x\n\n", myLetters);
	
	printf("Address of the second element: %x\n", &myLetters[1]);
	printf("Address of the second element: %x\n\n", myLetters+1);
	
	printf("Address of the third element: %x\n", &myLetters[2]);
	printf("Address of the third element: %x\n\n\n", myLetters+2);
	
	printf("Value of the first element: %c\n", myLetters[0]);
	printf("Value of the first element: %c\n\n", *myLetters);
	
	printf("Value of the second element: %c\n", myLetters[1]);
	printf("Value of the second element: %c\n\n", *(myLetters+1));
	
	printf("Value of the third element: %c\n", myLetters[2]);
	printf("Value of the third element: %c\n\n", *(myLetters+2));
	
	return 0;
}
