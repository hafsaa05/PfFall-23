//**
//Programmar: Hafsa Rashid
//8th Oct'23
//Descp:To print a prgram that take use input array and prints the sum of its elements.
//**
#include <stdio.h>

int main() {
    int n;

    printf("enter the number of elements in arr: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("arr should be a positive\n");
        return 1;
    }
    int arr[n]; 
    int sum = 0;

    printf("enter %d elements:\n", n);
int i;
    for ( i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i]; 
    }

    printf("The sum of elements in the arr is: %d\n", sum);

    return 0;
}

