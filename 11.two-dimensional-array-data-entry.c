#include <stdio.h>
#include <stdlib.h>


int main() {
	int Row, Column, i, j;
	printf("Enter numbers of rows: ");
	scanf("%d", &Row);
	printf("Enter number of columns: ");
	scanf("%d", &Column);
	int matrix[Row][Column];
	for(i=0; i<Row; i++){
		for(j=0; j<Column; j++){
			printf("\nMatrix[%d][%d] = ", i, j);
			scanf("%d", &matrix[i][j]);
		}
	}
	printf("Your array: \n");
		for(i=0; i<Row; i++){
		for(j=0; j<Column; j++){
			printf("%4d", matrix[i][j]);
		}
		printf("\n");
	}
	return 0;
}
