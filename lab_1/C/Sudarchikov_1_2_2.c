#include <stdio.h>
#include <math.h>


int main(void) {
    int n = 100000;
    double a = 0;
    double b = 5;

    double h = (b - a) / n;
    double I = 0;

    for (double x = a; x <= b; x += h) {
        double f = exp(x + 2.0);
        f = (x == a || x == b) ? f/2 : f;
        I += f;
    }
    I *= h;
    printf("\nI = %f\n\n", I);
}