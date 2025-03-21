#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct BirthDate {
    unsigned int day: 5;
    unsigned int month: 4;
    unsigned int year: 7;
    unsigned int century: 1;
};

int main(void) {
    struct BirthDate x = {15, 2, 6, 1};
    struct BirthDate y = {3, 12, 99, 0};

    printf("\nBirth date X: %02d.%02d.%02d%02d", x.day, x.month, x.century ? 20 : 19, x.year);
    printf("\nBirth date Y: %02d.%02d.%02d%02d\n\n", y.day, y.month, y.century ? 20 : 19, y.year);

    return 0;
}