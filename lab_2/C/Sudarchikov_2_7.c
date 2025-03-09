#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void) {
    int **mx = NULL;
    int h = 4;
    int w = 3;

    srand(time(0));

    // Выделим память
    mx = (int **)malloc(sizeof(int *) * h);
    if (mx == NULL) {
        printf("Ошибочка: не удалось выделить память для строк :(\n\n");
        return EXIT_FAILURE;
    }

    for (int r = 0; r < h; r++) {
        *(mx + r) = (int *)malloc(sizeof(int) * w);

        if (mx[r] == NULL) {
            printf("Ошибочка: не удалось выделить память для столбца :(\n");

            // Нужно освободить всё, что уже успели занять
            for (int j = 0; j < r; j++) {
                free (mx[j]);
            }
            free (mx);
            return EXIT_FAILURE;
        }
    }

    // Заполним и сразу выведем матрицу
    printf("\n\n");
    for (int r = 0; r < h; r++) {
        for (int c = 0; c < w; c++) {
            mx[r][c] = rand() % 10;
            printf("%d ", mx[r][c]);
        }
        printf("\n");
    }
    printf("\n");

    // Освободим память
    for (int r = 0; r < h; r++) {
        free(mx[r]);
    }
    free(mx);

    return 0;
}