//*
//Programmer: Hafsa Rashid
//Date: 10/24/2023
//Description:a C program that swaps the values of two integers using a user-defined function, swapIntegers. The user inputs two integer values, and the program uses the function to swap them

#include<stdio.h>

void main() 
{
	int A, B;
	void swap(int A, int B);
	printf("Enter the value of first integer\n");
	scanf("%d", &A );
	printf("Enter the value of second integer\n");
	scanf("%d", &B );
	int temp;
	temp=A;
	A=B;
	B=temp;
	printf("The values of integers are: %d and %d", A,B);
}
void swap(int A, int B)
{
	int x, y;
	swap(x,y);
}
