//**
//Programmar: Hafsa Rashid
//8th Oct'23
//Descp:To print a program to read n number of values in an array and display it in reverse order.
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

    printf("enter %d elements:\n", n);
int i;
    for ( i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("elemnts in reverse order:\n");
int j ;
    for ( j = n - 1; j>= 0; j--) {
        printf("%d\n", arr[j]);
    
}
    return 0;
}
