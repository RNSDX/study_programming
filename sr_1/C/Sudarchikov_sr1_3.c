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

    printf("\nInput month number: ");
    scanf("%d", &n);
    n = (n==12) ? 0 : n/3;
    printf("\n%s\n\n", seasons[n]);

    return 0;
}