#include <stdio.h>


int main(void) {
    int n;
    printf("\nInput vector X length: ");
    scanf("%d", &n);

    int x[n], y[n];
    for (int i = 0; i < n; i++) {
        printf("Input x_%d: ", i);
        scanf("%d", &x[i]);
        y[i] = x[i] * x[i];
    }

    printf("\nVector Y:\n");
    for (int i = 0; i < n; i++) {
        printf("y_%d: %d\n", i, y[i]);
    }
    printf("\n");

    return 0;
}

