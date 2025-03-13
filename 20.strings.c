#include <stdio.h>
#include <stdlib.h>


int main() {	
	char greetings[] = "Hello C!";
	int i=0, size;
	size = sizeof(greetings);
	while(* (greetings+i) != '\0'){
		printf("%c", * (greetings+i));
		i++;
	}
	return 0;
}
