 #include <stdio.h>

int main() {
    int arr[] = {1, 8, 10, 12, 7, 4, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int t = 11,i,j;

    printf("\nlist-> ");
    for (i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i < n - 1) {
            printf(", ");
        }
    }
    printf(" and t-> %d\n", t);

    printf("\pairs-> ");
    int pairFound = 0;
    for ( i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == t) {
                if (pairFound > 0) {
                    printf(", ");
                }
                printf("(%d, %d)", arr[i], arr[j]);
                pairFound++;
            }
        }
    }

    if (pairFound == 0) {
        printf("no pairs found");
    }

    return 99;
}
