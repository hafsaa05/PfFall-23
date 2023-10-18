//*
//*Programmer:Hafsa Rashid
//*Date:10' Oct 23
//Description:You are given an n x n integer matrix grid. Generate a matrix “maxLocal” of size (n - 2) x (n - 2) such that: maxLocal[i][j] is equal to the largest value of the 3 x 3 matrix in grid centered around row i + 1 and column j + 1. In other words, we want to find the largest value in every contiguous 3x3 matrix in the grid. Return the generated matrix. 
//*
#include<stdio.h>
int main()
{
	int i, j, x, y,n;
	printf("The rows and columns are: \n");
	scanf("%d",&n);
	int grid[n][n];
	int maxlocal[n-2][n-2];
	printf("The elements for your grid matrix are: \n");

	for(i=0;i<n;i++) {
		for(j=0;j<n;j++)
		{
			printf("Enter element number %d%d: \n",i,j);
			scanf("%d",&grid[i][j]);
		}
	}
	if(n<3)
	{
		printf("Now enter a larger number of rows and columns and try again: \n");
	}
	else
	{

		for(i=1;i<n-1;i++)
		{
			for(j=1;j<n-1;j++)
			{
				int maxvalue=grid[i-1][j-1];
				for(x=i-1;x<=i+1;x++)
				{
					for(y=j-1;y<=j+1;y++)
					{
						if(grid[x][y]>maxvalue)
						{
							maxvalue=grid[x][y];
						}
					}
				}
				maxlocal[i-1][j-1]=maxvalue;
			}
		}
		printf("\nThe maxlocal matrix is:\n ");

		for(i=0;i<n-2;i++)
		{
			for(j=0;j<n-2;j++)
			{
				printf("%d\t",maxlocal[i][j]);
			}

			printf("\n");
		}
	}



}
