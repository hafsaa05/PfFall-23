/*
*Programmer:Hafsa Rashid
*Date:10 Oct'23
*Description:This program takes an array with N elements as input, and sorts the array into ascending order and then prints the
sorted version.
*/
#include<stdio.h>
int main() {
	int n, i,j, min, temp;

	printf("The size of your array is: \n");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		printf("Enter element number %d: \n",i+1);
		scanf("%d",&arr[i]);
	}

	printf("The original array is: \n");
	for(i=0;i<n;i++)
	{
		printf("%d, ",arr[i]);
	}

	for(i=0;i<n;i++) {
		for(j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				temp = arr[j];
				arr[j]=arr[i];
				arr[i]=temp;
			}
		}
	}
	printf("the sorted array is: \n");
	for(i=0;i<n;i++) {
		printf("%d, ",arr[i]);
	}
}
