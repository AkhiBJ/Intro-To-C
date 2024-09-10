#include <stdio.h>
#include <string.h>

#define MAX_BOOKS 100

struct Book {
    char title[50];
    char author[50];
    int edition;
    float cost;
    int numCopies;
};

struct Book books[MAX_BOOKS];
int numBooks = 0;

void addBook() {
    if (numBooks >= MAX_BOOKS) {
        printf("Book database is full.\n");
        return;
    }

    struct Book book;

    printf("Enter book details:\n");
    printf("Title: ");
    scanf("%s", book.title);
    printf("Author: ");
    scanf("%s", book.author);
    printf("Edition: ");
    scanf("%d", &book.edition);
    printf("Cost: ");
    scanf("%f", &book.cost);
    printf("Number of copies: ");
    scanf("%d", &book.numCopies);

    books[numBooks] = book;
    numBooks++;

    printf("Book added successfully.\n");
}

void searchBook() {
    char title[50];
    int found = 0;

    printf("Enter the title of the book: ");
    scanf("%s", title);

    for (int i = 0; i < numBooks; i++) {
        if (strcmp(books[i].title, title) == 0) {
            printf("Book found:\n");
            printf("Title: %s\n", books[i].title);
            printf("Author: %s\n", books[i].author);
            printf("Edition: %d\n", books[i].edition);
            printf("Cost: %.2f\n", books[i].cost);
            printf("Number of copies: %d\n", books[i].numCopies);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Book not found.\n");
    }
}

void editBook() {
    char title[50];
    int found = 0;

    printf("Enter the title of the book to edit: ");
    scanf("%s", title);

    for (int i = 0; i < numBooks; i++) {
        if (strcmp(books[i].title, title) == 0) {
            printf("Enter new details:\n");
            printf("Title: ");
            scanf("%s", books[i].title);
            printf("Author: ");
            scanf("%s", books[i].author);
            printf("Edition: ");
            scanf("%d", &books[i].edition);
            printf("Cost: ");
            scanf("%f", &books[i].cost);
            printf("Number of copies: ");
            scanf("%d", &books[i].numCopies);

            printf("Book details updated successfully.\n");
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Book not found.\n");
    }
}

void deleteBook() {
    char title[50];
    int found = 0;

    printf("Enter the title of the book to delete: ");
    scanf("%s", title);

    for (int i = 0; i < numBooks; i++) {
        if (strcmp(books[i].title, title) == 0) {
            for (int j = i; j < numBooks - 1; j++) {
                books[j] = books[j + 1];
            }
            numBooks--;

            printf("Book deleted successfully.\n");
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Book not found.\n");
    }
}

int main() {
    int choice;

    while (1) {
        printf("\nBook Shop Menu:\n");
        printf("1. Add a book\n");
        printf("4. Search a book\n");
        printf("3. Edit details of a book\n");
        printf("4. Delete a book\n");
        printf("5. End the program\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addBook();
                break;
            case 2:
                searchBook();
                break;
            case 3:
                editBook();
                break;
            case 4:
                deleteBook();
                break;
            case 5:
                printf("Exiting the program...\n");
                return 0;
           default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}