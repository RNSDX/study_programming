#include <stdio.h>
#include <stdlib.h>


int main(void) {
    int a = 1234567890;
    unsigned char *pa = (unsigned char *)&a;

    for (unsigned char *p = pa; p < pa + sizeof(a); p++)
        printf("%d\n", *p);

    return 0;
}
// Использую unsigned char, так как с char выводятся некорректные значения.