#include <stdio.h>
int main()
{
	int n;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	int *arrA[n];
	char *arrB[n];
	long long int *arrC[n];
	printf("Enter the elements in integer array: \n");
	for (int i=0;i<n;i++)
	{
		scanf("%d",&arrA[i]);
	}
	printf("Enter elements in character array: \n");
	for (int i=0;i<n;i++)
	{
		scanf(" %c",&arrB[i]);
	}
	printf("Enter elements in long integer array: \n");
	for (int i=0;i<n;i++)
	{
		scanf("%ld",&arrC[i]);
	}
	printf("The integer array\n");
	for (int i=0;i<n;i++)
	{
		printf("Address: %d,Element: %d\n",&arrA[i],arrA[i]);
	}
	printf("Character array\n");
	for (int i=0;i<n;i++)
	{
		printf("Address: %d,Element: %c\n",&arrB[i],arrB[i]);
	}
	printf("Long integer array\n");
	for (int i=0;i<n;i++)
	{
		printf("Address: %d,Element: ld\n",&arrC[i],arrC[i]);
	}
	
}//end main
