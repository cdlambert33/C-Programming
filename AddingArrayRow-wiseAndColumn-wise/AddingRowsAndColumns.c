#include <stdio.h>
#include <stdlib.h>

// Method declaration
void helloWorld();
void createArray(void);
void fillArray(void);
void emptyArray(void);
void findArraySumColumnwise(void);
void findArraySumRowwise(void);
void printArray(void);

// Variable declaration
double * array;
long int arraySize = 3;
double * arrayAddress;
long int rowIndex, columnIndex;
long int columnArraySum, rowArraySum;



int main()
{
	helloWorld();
	createArray();
	//findArraySumColumnwise();
	//findArraySumRowwise();
	for(int i = 2; i < 6; i++){
		printf("I is %d\n", i);
	}

	printf("Hello world!\n");

printArray();
	return 0;
}

void helloWorld(){
	printf("Hello world inside function!\n");
	//return 0;

}

void createArray(void){
	printf("Hello world inside create array!\n");

	arrayAddress = (double*)malloc(arraySize * arraySize * sizeof(double));
printf("Hello world inside create array! after malloc\n");
	emptyArray();
	fillArray();

	//0printf("%p\n", array);
}

void fillArray(void){
	double counter = 1;

	for(rowIndex = 0; rowIndex < arraySize; rowIndex++){
		for(columnIndex = 0; columnIndex < arraySize; columnIndex++){
			printf("counter: %.0f\n", counter);
			*(arrayAddress + columnIndex + (rowIndex * arraySize)) = counter;
			counter++;
		}
	}
}

void printArray(void){
	//double counter = 1;
	//printf("Hello world inside empty array!\n");
	for(rowIndex = 0; rowIndex < arraySize; rowIndex++){
		for(columnIndex = 0; columnIndex < arraySize; columnIndex++){
			printf("%.0f, ",
			 *(arrayAddress + columnIndex + (rowIndex * arraySize)));
			//counter++;
		}
		printf("\n");
	}
	//printf("Hello world inside empty array! after work\n");
}


void emptyArray(void){
	double counter = 1;
	printf("Hello world inside empty array!\n");
	for(rowIndex = 0; rowIndex < arraySize; rowIndex++){
		for(columnIndex = 0; columnIndex < arraySize; columnIndex++){
			printf("counter: %.0f\n", counter);
			*(arrayAddress + columnIndex + (rowIndex * arraySize)) = 0;
			counter++;
		}
	}
	printf("Hello world inside empty array! after work\n");
}

void findArraySumColumnwise(void){
	columnArraySum = 0;

	for(columnIndex = 0; columnIndex < arraySize; columnIndex++){
		for(rowIndex = 0; rowIndex < arraySize; rowIndex++){
			columnArraySum = columnArraySum + (*(arrayAddress + columnIndex + (rowIndex * arraySize)));
		}
	}
	printf("%.0ld\n", columnArraySum );
}

void findArraySumRowwise(void){
	rowArraySum = 0;

	for(rowIndex = 0; rowIndex < arraySize; rowIndex++){
		for(columnIndex = 0; columnIndex < arraySize; columnIndex++){
			rowArraySum = rowArraySum + (*(arrayAddress + rowIndex + (columnIndex * arraySize)));
		}
	}
	printf("%.0ld\n", rowArraySum );
}
