#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int findLength(char*);

int main() {
	
	char message[100];
	
	puts("Enter a message:");
	gets(message);
	
	printf("Length: %d\n", findLength(message));
	
	return 0;
}

int findLength(char* ptr){
	int i=0;
	while(ptr[i] != '\0'){
		i++;
	}
	return i;
}
