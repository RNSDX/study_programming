#include <stdio.h>
#include <stdlib.h>


int main(void) {
    int n;
    float sum = 0;

    printf("\nInput array length: ");
    scanf("%d", &n);

    float *a = (float *)malloc(sizeof(float) * n);

    printf("\nInput array elements:\n");
    for(int i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%f", a + i);
        sum += *(a + i);
    }
    printf("\nMean: %.2f\n\n", sum/n);
}