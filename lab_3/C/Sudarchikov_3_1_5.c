#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define n    12


struct Node {
    int num;
    struct Node *prev;
    struct Node *next;
};

int main(void) {
    struct Node *f0 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *f1 = (struct Node *)malloc(sizeof(struct Node));
    f0->next = f1;
    f1->prev = f0;
    f1->num = 1;

    struct Node *pt = f1;
    for (int i = 2; i < n; i++) {
        struct Node *f = (struct Node *)malloc(sizeof(struct Node));
        f->prev = pt;
        f->next = NULL;
        f->num = f->prev->num + f->prev->prev->num;

        pt->next = f;

        pt = f;
    }

    // Direct
    printf("\n");
    pt = f0;
    while (pt != NULL) {
        printf(pt->next == NULL ? "%d\n" : "%d, ", pt->num);
        pt = pt->next;
    }

    // Reverse
    pt = f0;
    while(pt->next != NULL) {
        pt = pt->next;
    }

    while (pt != NULL) {
        printf(pt->prev == NULL ? "%d\n\n" : "%d, ", pt->num);
        pt = pt->prev;
    }

    // Let's free memory
    pt = f0;
    while (pt != NULL) {
        free(pt);
        pt = pt->next;
    }

    return 0;
}