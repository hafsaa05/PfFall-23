/*
 * Programmer: Hafsa Rashid
 * Desc: Write a C program that takes a matrix from a file and filename is given as command line argument
(use argc and argv). The dimensions can be (2x2, 4x4, and 8x8). Make sure that your program
tackles any of the dimensions. Your program should compute the max value from each 2 x 2
submatrix and save it into a new matrix.
 */
#include <stdio.h>
#include <stdlib.h>

int i, j, a, b;

void maximum_value(int **arr, int size) {
    for (i = 0; i < size; i += 2) {
        for (j = 0; j < size; j += 2) {
            int max = arr[i][j];
            for (a = 0; a < 2; a++) {
                for (b = 0; b < 2; b++) {
                    if (max < arr[i + a][j + b]) {
                        max = arr[i + a][j + b];
                    }
                }
            }
            printf("%d\t", max);
        }
        printf("\n");
    }
}

int main(int argc, char const *argv[]) {
    printf("Programmer: Hafsa Rashid\nID: 23K-0064\n");

    int size = atoi(argv[1]);

    while (!(size == 2 || size == 4 || size == 8)) {
        printf("Incorrect dimension\nEnter dimension again: ");
        scanf("%d", &size);
    }

    FILE *fptr;
    fptr = fopen(argv[2], "r");

    if (fptr == NULL) {
        printf("Error reading File");
        return 1;
    }

    int **arr = malloc(size * sizeof(int *));
    if (arr == NULL) {
        printf("Memory allocation failed");
        return 1;
    }

    for (i = 0; i < size; i++) {
        arr[i] = malloc(size * sizeof(int));
        if (arr[i] == NULL) {
            printf("Memory allocation failed");
            return 1;
        }
    }

    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            if (fscanf(fptr, "%d", &arr[i][j]) != 1) {
                fclose(fptr);
                return 1;
            }
        }
    }

    fclose(fptr);

    // Print the original matrix
    printf("Original Matrix:\n");
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    // Find and print maximum values in sub-blocks
    printf("\nMaximum Values in Sub-Blocks:\n");
    maximum_value(arr, size);

    // Free allocated memory
    for (i = 0; i < size; i++) {
        free(arr[i]);
    }
    free(arr);

    return 0;
}
