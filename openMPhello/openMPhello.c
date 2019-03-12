#include <stdio.h>
#include <omp.h>

//to compoile using openmp
//gcc -fopenmp openMPhello.c

int main(){
	for (int i = 0; i < 100; i++){
		#pragma omp parallel
		{
			//int ID = 0;
			int ID = omp_get_thread_num();
			printf("Hello(%d)", ID);
			printf("world(%d) \n", ID);
		}
		return 0;
	}
}
