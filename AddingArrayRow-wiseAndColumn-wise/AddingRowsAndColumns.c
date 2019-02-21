#include <stdio.h>
#include <stdlib.h>

// Method declaration
void helloWorld();
void createArray();
void fillArray();

// Variable declaration
int * array;
int arraySize = 10;
double * arrayAddress;


int main()
{
	helloWorld();
	//createArray();

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

	//zeroOutArray();
	fillArray();
	//printf("%p\n", array);
}

void fillArray(){
	int counter = 1;
	int rowIndex, columnIndex;

	for(rowIndex = 0; rowIndex < arraySize; rowIndex++){
		for(columnIndex = 0; columnIndex < arraySize; columnIndex++){
			*(arrayAddress + columnIndex + (rowIndex * arraySize)) = counter;
			counter++;
		}
	}
}
