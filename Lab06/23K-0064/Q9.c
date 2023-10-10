//**
//Programmar: Hafsa Rashid
//8th Oct'23
//Descp:To print a program to find the minimum and maximum number in an array.
//**
#include <stdio.h>

int main() {
    int n;
 printf("enter the nmber of elements in the arr: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("arr should be a positive\n");
        return 1; 
    }

    int arr[n]; 
    int max, min;
    printf("Enter %d elements:\n", n);
int i;
    for ( i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (i == 0) {
            max = min = arr[i];
        } else {
            if (arr[i] > max) {
                max = arr[i];
            } else if (arr[i] < min) {
                min = arr[i];
            }
        }
    }

    printf("max num in arr: %d\n", max);
    printf("min num in arr: %d\n", min);

    return 0;
}
