#include <stdio.h>

void makeAnArray(int sumOfInts);

int main()
{

	printf("Hello World!\n");
	int sumOfInts = 1;
	int arrayOfInts [2];
	while(0<sumOfInts)
	{
		sumOfInts = sumOfInts + 1;

		makeAnArray(sumOfInts);

		if(0 == (sumOfInts%1000))
		{
			printf("%d\n", sumOfInts);
		} 	
	}
	printf("%d\n", sumOfInts);

	printf("Bye World!\n");
	return 0;
}

void makeAnArray(int sumOfInts)
{
	int arrayOfInts [sumOfInts];
	int singleNumberArray[1];

	if(0 == (sumOfInts%1000))
		{
			printf("%i\n", sumOfInts);
			printf("array size: %i\n", sizeof(arrayOfInts)/sizeof(singleNumberArray));
		} 		
}
