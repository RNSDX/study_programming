#include <stdio.h>
#include <stdlib.h>

int main(void) {
    double ***pointer = NULL;
    (pointer = (double ***)malloc(sizeof(double **)), *pointer = (double **)malloc(sizeof(double *)), **pointer = (double *)malloc(sizeof(double)), ***pointer = 2.0, printf("\n%.1f\n\n", ***pointer), free(**pointer), free(*pointer), free(pointer));
}