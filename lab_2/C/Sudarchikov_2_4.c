#include <stdio.h>
#include <stdlib.h>

int main(void) {
    double *pa = NULL;
    int size;

    // Вводим длину массива
    printf("\nInput size of array, pls: ");
    scanf("%d", &size);

    // Проверим доступность оперативки
    pa = (double *)malloc(sizeof(double) * size);
    if (pa == NULL) {
        printf("Ошибочка :(\n\n");
        return EXIT_FAILURE;
    }

    // Ввод массива
    printf("\nInput elements of array, pls.\n");
    for (int i = 0; i < size; i++) {
        printf("a[%d] : ", i);
        scanf("%lf", pa + i);
    }

    // Вывод массива
    printf("\nHere is your array :)\n[");
    for (int i = 0; i < size; i++)
        printf(i == size - 1 ? "%.2f]\n\n" : "%.2f, ", *(pa + i));

    // Не забываем освободить память
    free(pa);

    return 0;
}