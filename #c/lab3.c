#include <stdio.h>
#include <string.h>

#define URL_LENGTH 100

int main() {
    char backHistory[10][URL_LENGTH];
    char forwardHistory[10][URL_LENGTH];
    int backCount = 0, forwardCount = 0;
    char currentURL[URL_LENGTH] = "";
    int choice;

    while (1) {
        printf("\n--- Browser Navigation ---\n");
        printf("1. Visit a New Website\n");
        printf("2. Go Back\n");
        printf("3. Go Forward\n");
        printf("4. Display Current Website\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            if (backCount < 10 && strlen(currentURL) > 0) {
                strcpy(backHistory[backCount++], currentURL);
            }
            forwardCount = 0; // Clear forward history

            printf("Enter the URL of the new website: ");
            scanf(" %s", currentURL);
            printf("You are now visiting: %s\n", currentURL);

        } else if (choice == 2) {
            if (backCount > 0) {
                strcpy(forwardHistory[forwardCount++], currentURL);
                strcpy(currentURL, backHistory[--backCount]);
                printf("You have gone back to: %s\n", currentURL);
            } else {
                printf("No websites in the back history.\n");
            }

        } else if (choice == 3) {
            if (forwardCount > 0) {
                strcpy(backHistory[backCount++], currentURL);
                strcpy(currentURL, forwardHistory[--forwardCount]);
                printf("You have gone forward to: %s\n", currentURL);
            } else {
                printf("No websites in the forward history.\n");
            }

        } else if (choice == 4) {
            if (strlen(currentURL) > 0) {
                printf("Current website: %s\n", currentURL);
            } else {
                printf("No website is currently being viewed.\n");
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