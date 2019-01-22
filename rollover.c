#include <stdio.h>
int main()
{
	//int sum = 1;
	//sum += 1;
	//for(int i = 1; i > 0; i++){
	//	printf("%d\n", i);
	//}
	
	int i, n, sum = 0;
	scanf("%d", &n);
	for( int i = 1; i <= n; i +1){
		sum = sum + 1;
		printf("%d",sum);	
	}
}
