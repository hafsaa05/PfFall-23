//*
//Programmer: Hafsa Rashid
//Date: 10/24/2023
//Description: Write a C program that defines a user-defined function processArray to calculate the sum, maximum, and minimum values in the array.

#include <stdio.h>

void processArray(int arr[], int size){
	int i, sum=0, maximum=-99999, minimum=99999;
	for(i=0; i<size; i++){
		sum = sum + arr[i];
		if (arr[i] < minimum ){
			minimum = arr[i];
		}//end if
		if (arr[i] > maximum){
			maximum = arr[i];
		}//end if
	}//end for
	printf("The sum of your array is: %d\n", sum);
	printf("The maximum value of your array is: %d\n ", maximum);
    printf("The minimum value of your array is: %d", minimum);	
}//end processArray


int main(){
	int size;
	printf("Enter the size of your array: ");
	scanf("%d", &size);
	int arr[size];
	int i;
	for(i=0; i<size; i++){
		printf("Enter number %d: ", i+1);
		scanf("%d", &arr[i]);
	}//end for
	processArray(arr, size);
}//end main
