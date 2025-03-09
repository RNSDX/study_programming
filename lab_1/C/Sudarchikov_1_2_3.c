#include <stdio.h>


int P(int n) {
    if (n > 2) {
        return P(n - 2) + P(n - 3);
    } else {
        return 1;
    }
}

int main(void) {
    int m;
    int p = 1;

    printf("\nPrivet! Invite you to input m: ");
    scanf("%d", &m);

    printf("Padovan numbers:\n");
    for (int n = 0; p <= m; n++) {
        printf("%d\n", p);
        p = P(n);
    }
}

