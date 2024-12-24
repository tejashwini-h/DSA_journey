#include <stdio.h>
#include <string.h>
#define MAX_BOOKS 100

char library[MAX_BOOKS][50];
int bookCount = 0;

void addBook() {
    if (bookCount < MAX_BOOKS) {
        printf("Enter book title: ");
        scanf(" %s", library[bookCount]);
        bookCount++;
        printf("Book added successfully.\n");
    } else {
        printf("Library is full!\n");
    }
}

void searchBook() {
    char title[50];
    printf("Enter title to search: ");
    scanf(" %s", title);
    for (int i = 0; i < bookCount; i++) {
        if (strcmp(library[i], title) == 0) {
            printf("Book found: %s\n", library[i]);
            return;
        }
    }
    printf("Book not found.\n");
}

void deleteBook() {
    char title[50];
    printf("Enter title to delete: ");
    scanf(" %s", title);
    for (int i = 0; i < bookCount; i++) {
        if (strcmp(library[i], title) == 0) {
            for (int j = i; j < bookCount - 1; j++) {
                strcpy(library[j], library[j + 1]);
            }
            bookCount--;
            printf("Book deleted successfully.\n");
            return;
        }
    }
    printf("Book not found.\n");
}

void displayBooks() {
    if (bookCount == 0) {
        printf("No books in the library.\n");
    } else {
        printf("Books in the library:\n");
        for (int i = 0; i < bookCount; i++) {
            printf("%d. %s\n", i + 1, library[i]);
        }
    }
}

int main() {
    int choice;
    do {
        printf("\nLibrary Management System\n");
        printf("1. Add a Book\n");
        printf("2. Search Book by Title\n");
        printf("3. Delete Book by Title\n");
        printf("4. Display All Books\n");
        printf("5. Exit\n");
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
                deleteBook();
                break;
            case 4:
                displayBooks();
                break;
            case 5:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice.\n");
        }
    } while (choice != 5);

    return 0;
}