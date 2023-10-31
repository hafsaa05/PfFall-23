#include <stdio.h>

void reverse(int *arr, int size) {
    int i, j, temp;
    for (i = 0, j = size - 1; i < (size / 2); i++, j--) {
        temp = arr[i];
        arr[i] = arr[j];  
        arr[j] = temp;   
    }
}

int main() {
    int i;
    int n = 10;
    int arr[n];
    printf("Enter 10 elements for your Array:\n");

    for (i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1); // Change: Prompt for element number.
        scanf("%d", &arr[i]);
    }

    printf("Array before calling the reverse function:\n");
    for (i = 0; i < n; i++) {
        printf("%d | ", arr[i]);
    }

    reverse(arr, n);

    printf("\nArray after calling the reverse function:\n");
    for (i = 0; i < n; i++) {
        printf("%d | ", arr[i]);
    }

    return 0;
}
