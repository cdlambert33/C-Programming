#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/time.h>

// Method declaration
void helloWorld();
void createArray(void);
void fillArray(void);
void emptyArray(void);
void findArraySumColumnwise(void);
void findArraySumRowwise(void);
void printArray(void);
void startTheTimer(void);
void printTime(void);
void giveMatrixSize(void);

// Variable declaration
double * array;
long int arraySize = 10;
double * arrayAddress;
long int rowIndex, columnIndex;
long int columnArraySum, rowArraySum;
long startTime;
long endTime;
struct timeval timecheck;

int main()
{
	printf("Array Size, Row-wise Sum, Row-wiseTime, Column-wise Sum, Column-wise time\n\n");

	giveMatrixSize();

	//printArray();
	return 0;
}

void giveMatrixSize(void){
/*
	for(long int arraySize = 10;
			arraySize <= 1000000000;
			arraySize = arraySize * 10)
			{*/
				for(arraySize = 10; arraySize <= 1000000; arraySize = arraySize * 10){
				printf("%.0ld, ", arraySize);

				createArray();
				startTheTimer();
				findArraySumRowwise();
				printTime();
				startTheTimer();
				findArraySumColumnwise();
				printTime();

				printf("\n");}
				//free(arrayAddress);
	//		}
}

void createArray(void){

	arrayAddress = (double*)malloc(arraySize * arraySize * sizeof(double));
	emptyArray();
	fillArray();
}

void fillArray(void){
	double counter = 1;

	for(rowIndex = 0; rowIndex < arraySize; rowIndex++){
		for(columnIndex = 0; columnIndex < arraySize; columnIndex++){
			*(arrayAddress + columnIndex + (rowIndex * arraySize)) = counter;
			counter++;
		}
	}
}

void printArray(void){
	printf("\n");

	for(rowIndex = 0; rowIndex < arraySize; rowIndex++){
		for(columnIndex = 0; columnIndex < arraySize; columnIndex++){
			printf("%.0f, ",
			 *(arrayAddress + columnIndex + (rowIndex * arraySize)));
		}
		printf("\n");
	}
}


void emptyArray(void){
	double counter = 1;

	for(rowIndex = 0; rowIndex < arraySize; rowIndex++){
		for(columnIndex = 0; columnIndex < arraySize; columnIndex++){
			*(arrayAddress + columnIndex + (rowIndex * arraySize)) = 0;
			counter++;
		}
	}
}

void findArraySumColumnwise(void){
	columnArraySum = 0;

	for(columnIndex = 0; columnIndex < arraySize; columnIndex++){
		for(rowIndex = 0; rowIndex < arraySize; rowIndex++){
			columnArraySum = columnArraySum + (*(arrayAddress + columnIndex + (rowIndex * arraySize)));
		}
	}
	printf("%.0ld, ", columnArraySum );
}

void findArraySumRowwise(void){
	rowArraySum = 0;

	for(rowIndex = 0; rowIndex < arraySize; rowIndex++){
		for(columnIndex = 0; columnIndex < arraySize; columnIndex++){
			rowArraySum = rowArraySum + (*(arrayAddress + rowIndex + (columnIndex * arraySize)));
		}
	}
	printf("%.0ld, ", rowArraySum );
}

void startTheTimer(void)
{
  gettimeofday(&timecheck, NULL);
  startTime =(long)timecheck.tv_sec * 1000000000 + (long)timecheck.tv_usec;
}

void printTime(void)
{
  gettimeofday(&timecheck, NULL);
  endTime = (long)timecheck.tv_sec * 1000000000 + (long)timecheck.tv_usec ;
  printf("%ld, ", (endTime - startTime));
}
