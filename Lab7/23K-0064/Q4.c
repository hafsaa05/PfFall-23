//*
//*Programmer:Hafsa Rashid
//*Date:10 Oct'23
//*Description: Taking a 2D array from user and checking if the matrix is symmetric or not.
//*

#include<stdio.h>
int main()
{
	int arr[2][2];
	int transpose[2][2];
	int i,j;
	printf("enter the elements for the 2x2 matrix: \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	printf("The 2x2 matrix is: \n");
    for(i=0;i<2;i++) {
			for(j=0;j<2;j++)
		{
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<2;i++) {
		for(j=0;j<2;j++)
		{
			transpose[j][i]=arr[i][j];
		}
	}
	printf("\n");
	
	printf("\nThe transpose matrix is: \n");
	for(i=0;i<2;i++) {
		for(j=0;j<2;j++)
		{
			printf("%d\t",transpose[i][j]);
		}
		printf("\n");
	}	
	int count=0;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			if(transpose[i][j]==arr[i][j]);
			if(transpose[i][j]==arr[i][j])
			{
				count++;
			}

			else
			count = 0;

		}
	}
	if(count==3)
	if(count==4)
	{
		printf("\nThe matrix is symmetric");
	}
}
