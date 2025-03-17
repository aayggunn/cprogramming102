#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct books{
	char* bookname;
	char* writer;
	int page;
	int year;
};

int main() {
	
	int i;
	struct books x[5];
	
	x[0].bookname = "Harry Potter ve Felsefe Tasi";
	x[0].writer = "J.K. Rowling";
	x[0].page = 250;
	x[0].year = 1999;
	
	x[1].bookname = "Harry Potter ve Sirlar Odasi";
	x[1].writer = "J.K. Rowling";
	x[1].page = 350;
	x[1].year = 2000;
	
	x[2].bookname = "Harry Potter ve Azkaban Tutsagi";
	x[2].writer = "J.K. Rowling";
	x[2].page = 3000;
	x[2].year = 2001;
	
	x[3].bookname = "Harry Potter ve Ates Kadehi";
	x[3].writer = "J.K. Rowling";
	x[3].page = 450;
	x[3].year = 2003;
	
	x[4].bookname = "Harry Potter ve Zumrudu-Anka Yoldasligi";
	x[4].writer = "J.K. Rowling";
	x[4].page = 550;
	x[4].year = 2005;
	
	for(i=0; i<5; i++){
		printf("Book Name: %s\n", x[i].bookname);
		printf("Writer Name: %s\n", x[i].writer);
		printf("Book Page: %d\n", x[i].page);
		printf("Year: %d\n\n", x[i].year);
		printf("--------------------\n\n");
	}
	return 0;
}
