#include <stdio.h>


int main(void) {
    int a;
    int sum = 11;

    printf("\nPrivet! Invite you to input 3-diget number:\n");
    for (int i = 0; sum > 10; i++) {
        scanf("%d", &a);
        sum = (a / 100) + (a % 100 /10) + (a % 10);
    }
    printf("\n");

    return 0;
}