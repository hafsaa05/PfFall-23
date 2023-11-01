#include <stdio.h>

int main() {
    int totalbaters, totalInings;
    int i, j;

    printf("enter the num of batsmen-> ");
    scanf("%d", &totalbaters);
    printf("enter the num of innings-> ");
    scanf("%d", &totalInings);

    int performanceArr[totalbaters][totalInings];

    for (i = 0; i < totalbaters; i++) {
        printf("enter scores for batsman %d:\n", i + 1);
        for (j = 0; j < totalInings; j++) {
            printf("inning %d-> ", j + 1);
            scanf("%d", &performanceArr[i][j]);
        }
    }

    for (i = 0; i < totalbaters; i++) {
        int totalRuns = 0;
        int highestScore = 0;
        int centuries = 0;
        int halfCenturies = 0;

        for (j = 0; j < totalInings; j++) {
            totalRuns += performanceArr[i][j];

            if (performanceArr[i][j] > highestScore) {
                highestScore = performanceArr[i][j];
            }

            if (performanceArr[i][j] >= 100) {
                centuries++;
            } else if (performanceArr[i][j] >= 50) {
                halfCenturies++;
            }
        }

        double averageRuns = (double)totalRuns / totalInings;

        printf("\nstatistics for batsman %d->\n", i + 1);
        printf("total runs scored-> %d\n", totalRuns);
        printf("average runs per inning-> %.2lf\n", averageRuns);
        printf("highest score in a single ining-> %d\n", highestScore);
        printf("number of centuries-> %d\n", centuries);
        printf("number of half centuries-> %d\n", halfCenturies);
    }

    return 99;
}
