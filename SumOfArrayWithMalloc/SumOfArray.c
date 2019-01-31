//Sum of Array

#include <stdio.h>
#include <stdlib.h>

int main()
{
	printf("\n");
	printf("Hello, World!\n");
	
	int* firstArray = (int*) malloc(1000 * sizeof(int));
	int i;
	int counter = 1;
	int sum = 0;
	for(i = 0; i < 1000; i++){
		*(firstArray + i) = 0;
	}
	
	for(i = 0; i < 1000; i++){
		*(firstArray + i) = counter;
		counter++;
	}
	
	printf("Counter: %d\n", counter);
	
	for(i = 0; i<1000; i++){
     		sum = sum + *(firstArray + i );
   	}
	
	printf("Sum: %d\n", sum);
	
	printf("Goodbye, World!\n");
	return 0;
}

