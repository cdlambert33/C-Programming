
#include <stdlib.h>
#include <stdio.h>


#define ARRAYSIZE 16

int main(int argc, char *argv[])
{
    char f_name[50];
    double * matrix = (double*)malloc(ARRAYSIZE * ARRAYSIZE *sizeof(double));
    //matrix = (double*)malloc(ARRAYSIZE * ARRAYSIZE *sizeof(double));
    double a[ARRAYSIZE][ARRAYSIZE];
    int i,j;
    double det;
    //Create filename
    sprintf(f_name,"m0016x0016.bin");
    printf("Reading array file %s of size %dx%d\n",f_name,ARRAYSIZE,ARRAYSIZE);
    //Open file
    FILE *datafile=fopen(f_name,"rb");
    if(!datafile)
    {
      fprintf(stderr, "Can't open input file in list!\n");
      exit(1);
    }
    //Read elelements
    for (i=0; i< ARRAYSIZE; i++){
        for (j=0; j< ARRAYSIZE; j++){
            fread(&a[i][j],sizeof(double),1,datafile);
            printf("a[%d][%d]=%f\n",i,j,a[i][j]);
        }
        printf("Matrix has been read.\n\n");
        fclose(datafile);
    }

    printf("Try 2.\n");

    for (i=0; i< ARRAYSIZE; i++){
        for (j=0; j< ARRAYSIZE; j++){
            fread(&a[i][j],sizeof(double),1,datafile);
            printf("a[%d][%d]=%f\n",i,j,*(matrix + i*ARRAYSIZE +j));
        }
        fclose(datafile);
    }
}
