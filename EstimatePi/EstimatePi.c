#include <stdio.h>
#include <omp.h>

static long num_steps = 100000;
#define NUM_THREADS 4

int main(){
  printf("Hello world\n");

  double step;
  int i;
  double pi;
  double x;
  double sum = 0.0;
  step = 1.0/(double) num_steps;
  #pragma omp parallel for reduction(+:sum)
  for (i = 0; i < num_steps; i++){
    x = (i = 0.5) * step;
    sum = sum + 4.0/(1.0 + x * x);
  }

  pi = step * sum;
  printf("Our pi estimate: %f.\n", pi);
  printf("Done\n");
  return 0;
}
