#include <stdio.h>
#include <math.h>


double h(double a, double b, double c, double x) {
    double term1 = -(x - a) / pow(x * x + a * a, 1.0 / 3.0);
    double numerator = 4.0 * pow(x * x + b * b, 3.0 / 4.0);
    double denominator = 2.0 + a + b + pow((x - c) * (x - c), 1.0 / 3.0);
    double term2 = -numerator / denominator;
    return term1 + term2;
}

int main(void) {
    double a = 0.12, b = 3.5, c = 2.4, x = 1.4;
    printf("\nh(%f, %f, %f, %f) = %f\n", a, b, c, x, h(a, b, c, x));
    
    a = 0.12; b = 3.5; c = 2.4; x = 1.6;
    printf("h(%f, %f, %f, %f) = %f\n", a, b, c, x, h(a, b, c, x));
    
    a = 0.27; b = 3.9; c = 2.8; x = 1.8;
    printf("h(%f, %f, %f, %f) = %f\n\n", a, b, c, x, h(a, b, c, x));
    
    return 0;
}

