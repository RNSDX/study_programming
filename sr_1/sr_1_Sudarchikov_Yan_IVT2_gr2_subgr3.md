# Самостоятельная работа №1
## Задача 1
### Постановка задачи
Динамический массив и вычисление среднего арифметического
### Список идентификаторов

| Имя переменной | Тип данных | Описание      |
| -------------- | ---------- | ------------- |
| n              | int        | Длина массива |
| sum            | float      | Сумма эл-ов   |

### Код программы
``` C
#include <stdio.h>
#include <stdlib.h>


int main(void) {
    int n;
    float sum = 0;

    printf("\nInput array length: ");
    scanf("%d", &n);

    float *a = (float *)malloc(sizeof(float) * n);

    printf("\nInput array elements:\n");
    for(int i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%f", a + i);
        sum += *(a + i);
    }
    printf("\nMean: %.2f\n\n", sum/n);
}
```
### Результат работы программы
```
Input array length: 4

Input array elements:
a[0] = 1
a[1] = 2
a[2] = 3
a[3] = 4

Mean: 2.50
```
<div style="page-break-after: always;"></div>

## Задача 2
### Постановка задачи
Каталог книг
### Список идентификаторов

| Имя переменной | Тип данных    | Описание        |
| -------------- | ------------- | --------------- |
| n              | int           | Длина массива   |
| book           | struct book * | Массив структур |
| title, author  | char          | Название, автор |
| year           | int           | Год публикации  |

### Код программы
``` C
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define n   3

struct Book {
    char title[51];
    char author[51];
    int year;

};

void printBook(struct Book * book) {
    printf("\n%s\n", book->title);
    printf("Author: %s\n", book->author);
    printf("Year: %d\n", book->year);
}

int main(void) {
    struct Book *book = malloc(sizeof(struct Book) * n);

    printf("\n__________________________________________________");
    for (int i = 0; i < n; i++) {
        printf("\nBook %d", i + 1);
        printf("\nInput title: ");
        fgets(book[i].title, sizeof(book[i].title), stdin);
        book[i].title[strcspn(book[i].title, "\n")] = '\0';
        printf("Input author: ");
        fgets(book[i].author, sizeof(book[i].author), stdin);
        book[i].author[strcspn(book[i].author, "\n")] = '\0';
        printf("Input year: ");
        scanf("%d", &(book[i].year));
        getchar();
        printf("__________________________________________________");
    }

    printf("\n\n\nBOOKS");
    printf("\n__________________________________________________");
    for (int i = 0; i < n; i++) {
        printBook(&book[i]);
        printf("__________________________________________________");
    }
    printf("\n\n");

    return 0;
}
```
### Результат работы программы
```
__________________________________________________
Book 1
Input title: War and Peace
Input author: Leo Tolstoy
Input year: 1869
__________________________________________________
Book 2
Input title: 1984
Input author: George Orewell
Input year: 1949
__________________________________________________
Book 3
Input title: Atlas Shrugged
Input author: Ayn Rand
Input year: 1957
__________________________________________________


BOOKS
__________________________________________________
War and Peace
Author: Leo Tolstoy
Year: 1869
__________________________________________________
1984
Author: George Orewell
Year: 1949
__________________________________________________
Atlas Shrugged
Author: Ayn Rand
Year: 1957
__________________________________________________
```
<div style="page-break-after: always;"></div>

## Задача 3
### Постановка задачи
Определение сезона по номеру месяца
### Список идентификаторов

| Имя переменной | Тип данных          | Описание                     |
| -------------- | ------------------- | ---------------------------- |
| seasons        | const char *seasons | Массив строк                 |
| n              | int                 | Номер месяца -> номер сезона |

### Код программы
``` C
#include <stdio.h>

enum Seasons {WINTER, SPRING, SUMMER, AUTUMN};

int main(void) {
    const char *seasons[] = {
        "Зима: декабрь(12), январь(1), февраль(2)",
        "Весна: март(3), апрель(4), май(5)",
        "Лето: июнь(6), июль(7), август(8)",
        "Осень: сентябрь(9), октябрь(10), ноябрь(11)"
    };
    int n;

    printf("Input month number: ");
    scanf("%d", &n);
    n = (n==12) ? 0 : n/3;
    printf("\n%s\n", seasons[n]);

    return 0;
}
```
### Результат работы программы
```
Input month number: 5

Весна: март(3), апрель(4), май(5)
```
```
Input month number: 12

Зима: декабрь(12), январь(1), февраль(2)
```