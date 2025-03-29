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