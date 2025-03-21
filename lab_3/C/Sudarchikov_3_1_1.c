#include <stdio.h>
#include <stdlib.h>


int sq(int x){
    return x * x;
}

struct Func {
    int (*func)(int);
};

int main(void) {
    struct Func f = {sq};
    int x = 10;

    printf("\n%d^2 = %d\n\n", x, f.func(x));

    return 0;
}