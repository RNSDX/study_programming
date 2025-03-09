#include <stdio.h>
#include <stdlib.h>


int main(void) {
    int *pa = NULL;
    int size;

    // Вводим длину массива
    printf("\nInput size of array, pls: ");
    scanf("%d", &size);

    // Проверим доступность оперативки
    pa = (int *)malloc(sizeof(int) * size);
    if (pa == NULL) {
        printf("Ошибочка :(\n\n");
        return EXIT_FAILURE;
    }

    // Ввод массива
    printf("\nInput elements of array, pls.\n");
    for (int i = 0; i < size; i++) {
        printf("a[%d] : ", i);
        scanf("%d", pa + i);
    }

    // Инверсия массива
    int *p = pa + size - 1;
    int buf;
    for (int i = 0; i < size / 2; i++, p--) {
        buf = *p;
        *p = *(pa + i);
        *(pa + i) = buf;
    }

    // Вывод массива
    printf("\nHere is your array, but inverted :)\n[");
    for (int i = 0; i < size; i++)
        printf(i == size - 1 ? "%d]\n\n" : "%d, ", *(pa + i));

    // Не забываем освободить память
    free(pa);

    return 0;
}