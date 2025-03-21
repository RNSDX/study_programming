#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct Complex {
    double x, y;
};

struct Complex complex_exp(struct Complex *z) {
    struct Complex s = {1.0, 0.0};
    struct Complex u = {1.0, 0.0};
    int k = 1;

    do {
        struct Complex t = u;
        t.x = (u.x * z->x - u.y * z->y) / k;
        t.y = (u.x * z->y + u.y * z->x) / k;
        u = t;
        s.x += u.x;
        s.y += u.y;

        k++;
    } while (sqrt(u.x * u.x + u.y * u.y) > 1e-4);

    return s;
}

int main(void) {
    struct Complex z;

    printf("\nPlease enter complex number z\n");
    printf("real part: ");
    scanf("%lf", &z.x);
    printf("imaginary part: ");
    scanf("%lf", &z.y);

    struct Complex e = complex_exp(&z);
    printf("\nexp(%.4f + %.4fi) = %.4f + %.4fi\n\n", z.x, z.y, e.x, e.y);

    return 0;
}