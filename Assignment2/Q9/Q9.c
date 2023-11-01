#include <stdio.h>

int main() {
    int N = 5; 
    int matrix1[N][N], matrix2[N][N];

    int top = 0, bottom = N - 1, left = 0, right = N - 1;
    int num = 1,i,j;

    while (num <= N * N) {
        for (  i = right; i >= left; i--) {
            matrix1[top][i] = num;
            num++;
        }
        top++;

        for (  i = top; i <= bottom; i++) {
            matrix1[i][left] = num;
            num++;
        }
        left++;

        for (  i = left; i <= right; i++) {
            matrix1[bottom][i] = num;
            num++;
        }
        bottom--;

        for (  i = bottom; i >= top; i--) {
            matrix1[i][right] = num;
            num++;
        }
        right--;
    }

    num = N * N;

    for (  i = 0; i < N; i++) {
        for (  j = 0; j < N; j++) {
            matrix2[i][j] = num;
            num--;
        }
    }

    printf("Spiral Incremental Matrix Inwards\n");
    for (  i = 0; i < N; i++) {
        for (  j = 0; j < N; j++) {
            printf("%d\t", matrix1[i][j]);
        }
        printf("\n");
    }

    printf("\nSpiral Incremental Matrix Outwards\n");
    for (  i = 0; i < N; i++) {
        for (  j = 0; j < N; j++) {
            printf("%d\t", matrix2[i][j]);
        }
        printf("\n");
    }

    return 99;
}
