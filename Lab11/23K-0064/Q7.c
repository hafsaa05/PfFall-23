/* Date: 11/21/2023
Programmer: Hafsa Rashid
Descrip: 7. Let us work on the menu of a library. Create a structure containing book information like
accession number, name of author, book title and flag to know whether book is issued or not.
Create a menu in which the following can be done.
1 - Display book information
2 - Add a new book
3 - Display all the books in the library of a particular author
4 - Display the number of books of a particular title
5 - Display the total number of books in the library
6 - Issue a book
(If we issue a book, then its number gets decreased by 1 and if we add a book, its number gets
increased by 1)
*/
#include <stdio.h>
#include <string.h>

struct Book {
    int accessionNumber;
    char author[50];
    char title[100];
    int isIssued; // 0 for not issued, 1 for issued
};

void displayBook(struct Book book) {
    printf("Accession Number: %d\n", book.accessionNumber);
    printf("Author: %s\n", book.author);
    printf("Title: %s\n", book.title);
    printf("Issued: %s\n", book.isIssued ? "Yes" : "No");
}

void addBook(struct Book library[], int *numBooks) {
    struct Book newBook;
    printf("Enter Accession Number: ");
    scanf("%d", &newBook.accessionNumber);
    printf("Enter Author: ");
    scanf("%s", newBook.author);
    printf("Enter Title: ");
    scanf("%s", newBook.title);
    newBook.isIssued = 0; // Initially, the book is not issued

    library[*numBooks] = newBook;
    (*numBooks)++;
    printf("Book added successfully.\n");
}

void displayBooksByAuthor(struct Book library[], int numBooks, char author[]) {
    printf("Books by Author %s:\n", author);
    for (int i = 0; i < numBooks; i++) {
        if (strcmp(library[i].author, author) == 0) {
            displayBook(library[i]);
            printf("\n");
        }
    }
}

void displayNumberOfBooksByTitle(struct Book library[], int numBooks, char title[]) {
    int count = 0;
    for (int i = 0; i < numBooks; i++) {
        if (strcmp(library[i].title, title) == 0) {
            count++;
        }
    }
    printf("Number of books with title %s: %d\n", title, count);
}

// Function to display the total number of books in the library
void displayTotalNumberOfBooks(int numBooks) {
    printf("Total number of books in the library: %d\n", numBooks);
}

// Function to issue a book
void issueBook(struct Book library[], int numBooks, int accessionNumber) {
    for (int i = 0; i < numBooks; i++) {
        if (library[i].accessionNumber == accessionNumber) {
            if (library[i].isIssued == 0) {
                library[i].isIssued = 1;
                printf("Book with Accession Number %d issued successfully.\n", accessionNumber);
            } else {
                printf("Book with Accession Number %d is already issued.\n", accessionNumber);
            }
            return;
        }
    }
    printf("Book with Accession Number %d not found.\n", accessionNumber);
}

int main() {
    struct Book library[100]; // Assuming a maximum of 100 books in the library
    int numBooks = 0;

    int choice;
    do {
        printf("\nLibrary Menu:\n");
        printf("1 - Display book information\n");
        printf("2 - Add a new book\n");
        printf("3 - Display all the books by a particular author\n");
        printf("4 - Display the number of books of a particular title\n");
        printf("5 - Display the total number of books in the library\n");
        printf("6 - Issue a book\n");
        printf("0 - Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (numBooks > 0) {
                    printf("Enter Accession Number: ");
                    int accessionNumber;
                    scanf("%d", &accessionNumber);
                    int found = 0;
                    for (int i = 0; i < numBooks; i++) {
                        if (library[i].accessionNumber == accessionNumber) {
                            displayBook(library[i]);
                            found = 1;
                            break;
                        }
                    }
                    if (!found) {
                        printf("Book with Accession Number %d not found.\n", accessionNumber);
                    }
                } else {
                    printf("No books in the library.\n");
                }
                break;

            case 2:
                addBook(library, &numBooks);
                break;

            case 3:
                if (numBooks > 0) {
                    printf("Enter Author: ");
                    char author[50];
                    scanf("%s", author);
                    displayBooksByAuthor(library, numBooks, author);
                } else {
                    printf("No books in the library.\n");
                }
                break;

            case 4:
                if (numBooks > 0) {
                    printf("Enter Title: ");
                    char title[100];
                    scanf("%s", title);
                    displayNumberOfBooksByTitle(library, numBooks, title);
                } else {
                    printf("No books in the library.\n");
                }
                break;

            case 5:
                displayTotalNumberOfBooks(numBooks);
                break;

            case 6:
                if (numBooks > 0) {
                    printf("Enter Accession Number to issue: ");
                    int accessionNumberToIssue;
                    scanf("%d", &accessionNumberToIssue);
                    issueBook(library, numBooks, accessionNumberToIssue);
                } else {
                    printf("No books in the library.\n");
                }
                break;

            case 0:
                printf("Exiting the library menu.\n");
                break;

            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    } while (choice != 0);

    return 0;
}
