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

        switch (choice) {
            case 1:
                if (bookCount >= MAX_BOOKS) {
                    printf("Library is full.\n");
                } else {
                    printf("Enter book title: ");
                    scanf(" %s", books[bookCount]);
                    bookCount++;
                    printf("Book added.\n");
                }
                break;

            case 2: {
                char searchTitle[TITLE_LENGTH];
                int found = 0;
                printf("Enter title to search: ");
                scanf(" %s", searchTitle);
                for (int i = 0; i < bookCount; i++) {
                    if (strcmp(books[i], searchTitle) == 0) {
                        found = 1;
                        break;
                    }
                }
                printf(found ? "Book found.\n" : "Book not found.\n");
                break;
            }

            case 3:
                if (bookCount == 0) {
                    printf("No books in library.\n");
                } else {
                    printf("Books in library:\n");
                    for (int i = 0; i < bookCount; i++) {
                        printf("%d. %s\n", i + 1, books[i]);
                    }
                }
                break;

            case 4: {
                char removeTitle[TITLE_LENGTH];
                int found = 0;
                printf("Enter title to remove: ");
                scanf(" %s", removeTitle);
                for (int i = 0; i < bookCount; i++) {
                    if (strcmp(books[i], removeTitle) == 0) {
                        found = 1;
                        for (int j = i; j < bookCount - 1; j++) {
                            strcpy(books[j], books[j + 1]);
                             }
                        bookCount--;
                        printf("Book removed.\n");
                        break;
                    }
                }
                if (!found) {
                    printf("Book not found.\n");
                }
                break;
            }

            case 5:
                printf("Exiting.\n");
                return 0;

            default:
                printf("Invalid choice.\n");
        }
    }
}



































































































































