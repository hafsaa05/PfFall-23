#include <stdio.h>

void swap(int ages[], int prices[], int i, int j) {
    int tempAge = ages[i];
    int tempPrice = prices[i];
    ages[i] = ages[j];
    prices[i] = prices[j];
    ages[j] = tempAge;
    prices[j] = tempPrice;
}

void stableSort(int ages[], int prices[], int n) {
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (ages[j] > ages[j + 1] || (ages[j] == ages[j + 1] && prices[j] < prices[j + 1])) {
                swap(ages, prices, j, j + 1);
            }
        }
    }
}

int main() {
    int n = 5;
    int i, j;
    int ages[] = {25, 30, 25, 30, 20};
    int prices[] = {20, 25, 30, 15, 35};

    printf("Original Shirt Details->\n");
    printf("Age: ");
    for (i = 0; i < n; i++) {
        printf("%d", ages[i]);
        if (i < n - 1) {
            printf(", ");
        }
    }
    printf("\n");

    printf("Price: ");
    for (i = 0; i < n; i++) {
        printf("%d", prices[i]);
        if (i < n - 1) {
            printf(", ");
        }
    }
    printf("\n");

    // Sort the shirts based on age and price
    stableSort(ages, prices, n);

    printf("Sorted Shirt Details->\n");
    printf("Age: ");
    for (i = 0; i < n; i++) {
        printf("%d", ages[i]);
        if (i < n - 1) {
            printf(", ");
        }
    }
    printf("\n");

    printf("Price: ");
    for (i = 0; i < n; i++) {
        printf("%d", prices[i]);
        if (i < n - 1) {
            printf(", ");
        }
    }
    printf("\n");

    return 0;
}
