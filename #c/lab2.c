#include <stdio.h>
#include <string.h>

#define MAX_BOOKS 100
#define TITLE_LENGTH 100

int main() {
    char books[MAX_BOOKS][TITLE_LENGTH];
    int bookCount = 0;
    int choice;

    while (1) {
        printf("\n--- Library Management ---\n");
        printf("1. Add Book\n");
        printf("2. Search for a Book\n");
        printf("3. Display All Books\n");
        printf("4. Remove a Book\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            if (bookCount >= MAX_BOOKS) {
                printf("Library is full. Cannot add more books.\n");
            } else {
                printf("Enter the title of the book: ");
                scanf(" %s", books[bookCount]);
                bookCount++;
                printf("Book added successfully.\n");
            }
        } else if (choice == 2) {
            char searchTitle[TITLE_LENGTH];
            int found = 0;
            printf("Enter the title of the book to search: ");
            scanf(" %s", searchTitle);
            for (int i = 0; i < bookCount; i++) {
                if (strcmp(books[i], searchTitle) == 0) {
                    found = 1;
                    break;
                }
            }

            if (found) {
                printf("The book '%s' is available in the library.\n", searchTitle);
            } else {
                printf("The book '%s' is not available in the library.\n", searchTitle);
            }
        } else if (choice == 3) {
            if (bookCount == 0) {
                printf("No books in the library.\n");
            } else {
                printf("Books in the library:\n");
                for (int i = 0; i < bookCount; i++) {
                    printf("%d. %s\n", i + 1, books[i]);
                }
            }
        } else if (choice == 4) {
            char removeTitle[TITLE_LENGTH];
            int found = 0;
            printf("Enter the title of the book to remove: ");
            scanf(" %s", removeTitle);

            for (int i = 0; i < bookCount; i++) {
                if (strcmp(books[i], removeTitle) == 0) {
                    found = 1;
                    for (int j = i; j < bookCount - 1; j++) {
                        strcpy(books[j], books[j + 1]);
                    }
                    bookCount--;
                    printf("The book '%s' has been removed from the library.\n", removeTitle);
                    break;
                }
                }

            if (!found) {
                printf("The book '%s' is not found in the library.\n", removeTitle);
            }
        } else if (choice == 5) {
            printf("Exiting the program. Goodbye!\n");
            break;
        } else {
            printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
