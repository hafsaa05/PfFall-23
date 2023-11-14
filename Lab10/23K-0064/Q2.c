#include <stdio.h>
#include <stdlib.h>

int isPrime(int num) {
   int i;
    if (num < 2) {
        return false;
    }
    for (i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

void PrimeN(int** array, int rows, int cols) {
    int num = 2; 
    int i;
    for ( i= 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            while (!isPrime(num)) {
                num++;
            }
            array[i][j] = num;
            num++; 
        }
    }
}

int main() {
    int rows, cols;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int** primeArray = (int**)malloc(rows * sizeof(int*));

    for (int i = 0; i < rows; i++) {
        primeArray[i] = (int*)malloc(cols * sizeof(int));
    }

    isPrime(primeArray, rows, cols);


    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%4d ", primeArray[i][j]);
        }
        printf("\n");
    }


    for (int i = 0; i < rows; i++) {
        free(primeArray[i]);
    }
    free(primeArray);

    return 0;
}
