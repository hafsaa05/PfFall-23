//*
//Programmer: Hafsa Rashid
//Date: 10/24/2023
//Description:  to create a C program that performs password length
validation and user authentication based on the given requirements
#include <stdio.h>
#include <string.h>

int main() {
    char storedPassword[] = "Secure123";
    char enteredPassword[20]; // Assuming a maximum password length of 19 characters

    printf("Enter your password: ");
    scanf("%s", enteredPassword);

    if (strlen(enteredPassword) < 8) {
        printf("Password is too short. Please enter a password of at least 8 characters.\n");
    } else {
        if (strcmp(enteredPassword, storedPassword) == 0) {
            printf("Login successful. Welcome!\n");
        } else {
            printf("Login failed. Incorrect password.\n");
        }
    }

    return 0;
}
