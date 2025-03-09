#include <stdio.h>


int main(void) {
    int n;
    printf("\nInput array X length: ");
    scanf("%d", &n);

    int x[n];
    for (int i = 0; i < n; i++) {
        printf("Input x_%d: ", i);
        scanf("%d", &x[i]);
    }

    printf("\nReverse array X:\n");
    for (int i = 0; i < n; i++) {
        printf("x_%d: %d\n", i, x[n-i-1]);
    }
    printf("\n");

    return 0;
}