#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void sortIt();
void writeTheArray();
void writeTheReverseArray();

int numbers[7];
int i;

int main() {
	printf("Enter array numbers: ");
	for(i=0; i<7; i++){
		scanf("%d", &numbers[i]);
	}
	printf("\nBefore Sorting: \n");
	writeTheArray();
	printf("\nThe array is sorting...\n");
	sortIt();
	printf("\nAfter sorting: \n");
	writeTheArray();
	return 0;
}
void sortIt(){
	int j, reserve;
	for(i=0; i<7; i++){
		for(j=i+1; j<7; j++){
			if(numbers[j] < numbers[i]){
				reserve = numbers[i];
				numbers[i] = numbers[j];
				numbers[j] = reserve;
			}
		}
	}
}
void writeTheArray(){
	for(i=0; i<7; i++){
		printf("%d\n",numbers[i]);
	}
}
void writeTheReverseArray(){
	for(i=6; i>=0; i--){
		printf("%d\n",numbers[i]);
	}
}
