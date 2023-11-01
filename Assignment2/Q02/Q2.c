#include <stdio.h>
#include <stdbool.h>

int main() {
    int numRows, numCols;
    int i, j, row, col, maxDim;
    printf("enter the number of rows and columns in the binary matrix-> ");
    scanf("%d %d", &numRows, &numCols);
    int matrix[numRows][numCols];
    printf("enter the elements of the binary matrix 0 or 1->\n");
    for (i = 0; i < numRows; i++) {
        for (j = 0; j < numCols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    int maxSS = 0;
    int maxSR = 0;
    int maxSC = 0;
    int dp[numRows][numCols];
    for (i = 0; i < numRows; i++) {
        for (j = 0; j < numCols; j++) {
            dp[i][j] = matrix[i][j];
            if (dp[i][j] == 1)
                maxSS = 1;  
        }
    }
    for (i = 1; i < numRows; i++) {
        for (j = 1; j < numCols; j++) {
            if (matrix[i][j] == 1) {
                int min = dp[i - 1][j - 1];
                if (dp[i - 1][j] < min)
                    min = dp[i - 1][j];//remove agr dp[i] -1 agya to
                if (dp[i][j - 1] < min)
                    min = dp[i][j - 1];
                dp[i][j] = min + 1;
                if (dp[i][j] > maxSS) {
                    maxSS = dp[i][j];
                    maxSR = i - maxSS + 1;
                    maxSC = j - maxSS + 1;
                }
            }
        }
    }

    if (maxSS > 0) {
        printf("\nlargest square submatrix of 1s found->\n");
        for (i = maxSR; i < maxSR + maxSS; i++) {
            for (j = maxSC; j < maxSC + maxSS; j++) {
                printf("%d ", matrix[i][j]);
            }
            printf("\n");
        }
        printf("dim-> %d x %d\n", maxSS, maxSS);
    } else {
        printf("no square submtrix of 1s found.\n");
    }

    return 99;
}
