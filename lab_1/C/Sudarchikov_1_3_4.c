#include <stdio.h>


int main(void) {
    const int I = 4;
    const int J = 3;
    double a[I][J] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
        {10, 11, 12}
    };

    for (int i = 0; i < I; i++) {
        double sum = 0;
        for (int j = 0; j < 3; j++) {
            sum += a[i][j];
        }
        a[i][0] = sum / J;
    }

    printf("\nMatrix B:\n");
    for (int i = 0; i < I; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%.3f\t", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}