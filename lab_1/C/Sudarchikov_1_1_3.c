#include <stdio.h>
#include <math.h>


float u(float x, float y) {
    float sinxy = sinf(x +y);
    return (1 + powf(sinxy, 2)) / (2 + fabs(x - (2*x*x / (1 + fabs(sinxy)))));
}

int main(void) {
    float x, y;

    printf("\nPrivet! Invite you to input 2 numbers: x and y!\n");
    scanf("%f%f", &x, &y);
    printf("\nWow! u(x, y) is %f\n\n", u(x, y));
}
