#include <stdio.h>
#include <stdlib.h>


union intdouble {
    int i;
    double d;
};

int main(void) {
    union intdouble *id = (union intdouble *)malloc(sizeof(union intdouble));

    id->i = 5;
    printf("\nint: %d", id->i);
    id->d = 5;
    printf("\nint: %.2f\n", id->d);
    printf("\nint: %d\n\n", id->i); // Не работает, т. к. заполнили поле double d

    free(id);

    return 0;
}