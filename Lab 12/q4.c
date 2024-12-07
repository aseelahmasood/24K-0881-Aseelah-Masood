#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Book {
    char title[100];
    char author[50];
    int publicationYear;
};

struct Library {
    struct Book *books;
    int numBooks;
};

void inputBookDetails(struct Book *book) {
    printf("Enter title: ");
    getchar();
    fgets(book->title, 100, stdin);
    book->title[strcspn(book->title, "\n")] = '\0';

    printf("Enter author: ");
    fgets(book->author, 50, stdin);
    book->author[strcspn(book->author, "\n")] = '\0';

    printf("Enter publication year: ");
    scanf("%d", &book->publicationYear);
}

void displayBooksAfter2000(struct Library *library) {
    printf("\nBooks published after the year 2000:\n");
    for (int i = 0; i < library->numBooks; i++) {
        if (library->books[i].publicationYear > 2000) {
            printf("Title: %s, Author: %s, Year: %d\n", library->books[i].title, library->books[i].author, library->books[i].publicationYear);
        }
    }
}

int main() {
    struct Library *library = (struct Library *)malloc(sizeof(struct Library));
    printf("Enter the number of books: ");
    scanf("%d", &library->numBooks);

    library->books = (struct Book *)malloc(library->numBooks * sizeof(struct Book));

    for (int i = 0; i < library->numBooks; i++) {
        printf("\nEnter details for book %d:\n", i + 1);
        inputBookDetails(&library->books[i]);
    }

    displayBooksAfter2000(library);

    free(library->books);
    free(library);

    return 0;
}
