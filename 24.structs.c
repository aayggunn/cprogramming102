#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct students{
	char myLetter;
	char* name;
	char* lastName;
	int no;
	float score;
	char parentName[50];
};

int main() {
	
	struct students x = {'A', "Ahmet", "Yilmaz", 1923, 95.6, "Murat"};
	
	printf("Letters: %c\n", x.myLetter);
	printf("Name: %s\n", x.name);
	printf("Last Name: %s\n", x.lastName);
	printf("Number: %d\n", x.no);
	printf("Score: %.2f\n", x.score);
	printf("Parent Name: %s\n", x.parentName);
	
	return 0;
}
