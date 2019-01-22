#include <stdio.h>
int main()
{

	printf("Hello World!\n");
	int sumOfInts = 1;
	while(0<sumOfInts){
		sumOfInts = sumOfInts + 1;
		
		if(0 == (sumOfInts%1000)){
			printf("%d\n", sumOfInts);
		}	
	}
	printf("%d\n", sumOfInts);

	printf("Bye world\n");
	return 0;
}
