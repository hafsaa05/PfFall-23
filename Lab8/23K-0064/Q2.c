//*
//Programmer: Hafsa Rashid
//Date: 10/24/2023
//Description: To print a C program with a user-defined function calculate to perform basic arithmetic operations such as addition, subtraction, multiplication, and division.
#include<stdio.h>
void add(float num1, float num2) {
    float result = num1 + num2;
    printf("Result: %.2f\n", result);
}
void sub(float num1, float num2) {
    float result = num1 - num2;
    printf("Result: %.2f\n", result);
}
void mul(float num1, float num2) {
    float result = num1 * num2;
    printf("Result: %.2f\n", result);
}
void div(float num1, float num2) {
    float result = num1 / num2;
    printf("Result: %.2f\n", result);
}

int main() 

{
	float num1, num2;
	char ops;
	
	printf("Enter the value of first number\n");
	scanf("%f", &num1 );
	printf("Enter the value of second number\n");
	scanf("%f", &num2 );
	printf("Enter the operator (+,-,*,/): \n");
	scanf(" %c", &ops);

    switch (ops) {
	case'+': add(num1, num2);
	break;
    
	case'-': sub(num1, num2);
	break;
	
	case'*': mul(num1, num2);
	break;
	
	case'/': div(num1, num2);
	break;
	
	default: printf("Invalid input\n");

	return 1;
}
return 0;
}
