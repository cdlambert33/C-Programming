#include <stdio.h>
#include <stdlib.h>

// Method declaration
void helloWorld();
void createArray();
void fillArray();
void emptyArray();
void findArraySumColumnwise();
void findArraySumRowwise();

// Variable declaration
int * array;
int arraySize = 3;
double * arrayAddress;
int rowIndex, columnIndex;
int columnArraySum, rowArraySum;


int main()
{
	helloWorld();
	//createArray();
	//findArraySumColumnwise();
	findArraySumRowwise();

	for(int i = 2; i < 6; i++){
		printf("I is %d\n", i);
	}

	printf("Hello world!\n");
		return 0;
}

void helloWorld(){
	printf("Hello world inside function!\n");
	//return 0;

}

void createArray(){
	array = (int*)malloc(arraySize * arraySize * sizeof(int));

	emptyArray();
	fillArray();
	//printf("%p\n", array);
}

void fillArray(){
	int counter = 1;
	//int rowIndex, columnIndex;

	for(rowIndex = 0; rowIndex < arraySize; rowIndex++){
		for(columnIndex = 0; columnIndex < arraySize; columnIndex++){
			*(arrayAddress + columnIndex + (rowIndex * arraySize)) = counter;
			counter++;
		}
	}
}

void emptyArray(){
	for(rowIndex = 0; rowIndex < arraySize; rowIndex++){
		for(columnIndex = 0; columnIndex < arraySize; columnIndex++){
			*(arrayAddress + columnIndex + (rowIndex * arraySize)) = 0;
		}
	}
}

void findArraySumColumnwise(){
	columnArraySum = 0;

	for(columnIndex = 0; columnIndex < arraySize; columnIndex++){
		for(rowIndex = 0; rowIndex < arraySize; rowIndex++){
			columnArraySum = columnArraySum + (*(arrayAddress + columnIndex + (rowIndex * arraySize)));
		}
	}
	printf("%.0d\n", columnArraySum );
}

void findArraySumRowwise(){
	rowArraySum = 0;

	for(rowIndex = 0; rowIndex < arraySize; rowIndex++){
		for(columnIndex = 0; columnIndex < arraySize; columnIndex++){
			rowArraySum = rowArraySum + (*(arrayAddress + rowIndex + (columnIndex * arraySize)));
		}
	}
	printf("%.0d\n", rowArraySum );
}
