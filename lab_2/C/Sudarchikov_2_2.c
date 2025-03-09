#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int a = 10;
    int b = 20;
    int *pa = &a;
    int *pb = &b;

    printf("\n%d + %d = %d\n\n", *pa, *pb, *pa + *pb);
}