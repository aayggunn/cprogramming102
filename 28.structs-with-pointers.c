#include <stdio.h>
#include <stdlib.h>

struct books{
	char* bookName;
	char* writer;
	int page;
	int year;
};

int main() {
	
	struct books x;
	struct books* y;
	y=&x;
	
	(*y).bookName = "Harry Potter ve Felsefe Tasi";
	(*y).writer = "J.K. Rowling";
	(*y).page = 250;
	(*y).year = 1999;
	
	printf("Book Name: %s\n", x.bookName);
	printf("Writer: %s\n", (*y).writer);
	printf("Page: %d\n", (*y).page);
	printf("Year: %d\n", x.year);
	
	return 0;
}
