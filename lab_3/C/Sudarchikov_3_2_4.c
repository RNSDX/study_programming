#include <stdio.h>
#include <stdlib.h>
#include <math.h>


enum Tag {INT, DOUBLE};

union Num {
    int i;
    double d;
};

struct UnTag {
    union Num num;
    enum Tag tag;
};

int main(void) {
    struct UnTag *pa = NULL;
    int size = 10;

    // Выделим память
    pa = (struct UnTag *)malloc(sizeof(struct UnTag) * size);
    if (pa == NULL) {
        printf("Error :(\n\n");
        return EXIT_FAILURE;
    }

    // Заполним массив
    for(int i = 0; i < size; i++) {
        if (i % 2 == 0) {
            pa[i].num.i = i / 2;
            pa[i].tag = INT;
        } else {
            pa[i].num.d = (double)i / 2;
            pa[i].tag = DOUBLE;
        }
    }

    // Вывод массива
    printf("\nHere is your array :)\n[");
    for (int i = 0; i < size; i++)
        if (pa[i].tag == INT)
            printf(i == size - 1 ? "%d]\n\n" : "%d, ", pa[i].num.i);
        else
            printf(i == size - 1 ? "%.2f]\n\n" : "%.2f, ", pa[i].num.d);


    // Освободим память
    free(pa);
    
    return 0;
} 