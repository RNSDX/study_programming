#include <stdio.h>
#include <stdlib.h>
#include <math.h>


union lnum {
    unsigned long num;
    unsigned char b[sizeof(unsigned long)];
};

int main(void) {
    union lnum ln;
    ln.num = 1234567890;
    
    printf("\n");
    for (int i =  0; i < sizeof(unsigned long); i++)
        printf("%d\n", ln.b[i]);
    printf("\n");

    return 0;
} 