//SumOf2DArray

#include <stdio.h>
#include <stdlib.h>

int main()
{
   // printf() displays the string inside quotation
   printf("Hello, World!\n");

	int* firstArray = (int*)malloc(1000 * 1000 * sizeof(int));
	int i, j;
	int counter = 1;
	int sum = 0;
	double sumDouble = 0;

	for(i = 0; i < 1000; i++){
		for(j = 0; j < 1000; j++){
			*(firstArray + i*1000 + j) = 0;		
		}	
	}	

	for(i = 0; i < 1000; i++){
		for(j = 0; j < 1000; j++){
			*(firstArray + i *1000 + j) = counter;
			counter++;
		}
	}
	
	printf("Counter: %d\n", counter);

	for(i = 0; i < 1000; i++){
		for(j = 0; j < 1000; j++){
			sum = sum + *(firstArray + i*1000 + j);
			sumDouble = sumDouble + (double)*(firstArray + 				i * 1000 + j);	
		}	
	}	
	
	printf("Sum: %d\n", sum);
	printf("SumDouble: %f\n", sumDouble);

	free(firstArray);

  	return 0;
}
