#include <stdio.h>
#include <stdlib.h>


int max(int *a, int *b) {
    if (a == NULL || b == NULL)
        return EXIT_FAILURE;
    return *a > *b ? *a : *b;
}

int main(void) {
    int a = 1005;
    int b = 20000;

    printf("\nmax(%d, %d) = %d\n\n", a, b, max(&a, &b));
}