#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct Vector {
    double x, y, z;
};

double scalar_pr(struct Vector *a, struct Vector *b){
    return a->x * b->x + a->y * b->y + a->z * b->z;
}

void vector_pr(struct Vector *a, struct Vector *b, struct Vector *c){
    c->x = a->y * b->z - a->z * b->y;
    c->y = a->z * b->x - a->x * b->z;
    c->z = a->x * b->y - a->y * b->x;
}

double vector_mod(struct Vector *a){
    return sqrt(a->x * a->x + a->y * a->y + a->z * a->z);
}

int main(void) {
    struct Vector a = {2, 3 ,6};
    struct Vector b = {1, 1.5 ,3};
    struct Vector c;

    printf("\na = (%.2f; %.2f; %.2f)", a.x, a.y, a.z);
    printf("\nb = (%.2f; %.2f; %.2f)\n", b.x, b.y, b.z);
    printf("\na ⋅ b = %.2f", scalar_pr(&a, &b));
    vector_pr(&a, &b, &c);
    printf("\na × b = c (%.2f; %.2f; %.2f)", c.x, c.y, c.z);
    printf("\n|a| = %.2f", vector_mod(&a));
    printf("\n|b| = %.2f\n\n", vector_mod(&b));

    return 0;
}