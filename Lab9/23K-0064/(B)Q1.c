/*
Programmer: Hafsa Rashid
Date: 10/31/23
Descp:Write a function for finding factorial of any integer N using recursion.
*/

#include<stdio.h>
int  FindFactorial(int n) {
	//base case
	if( n==1 ) {
		return 1;
} else {
	return n*FindFactorial(n-1);
	//Recursive Call
	//Making the clone and asking it
	//to write from n+1 onwards 
}
}

int main () {
	printf("%d", FindFactorial(5));
	return  0;
}
