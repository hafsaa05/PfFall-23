//*
//*Programmer:Hafsa Rashid
//*Date:10 Oct'23
//**Description:To print the multiplication of the first 2 matrices.
//
#include<stdio.h>
int main() {
	int matrix1[2][2];
	int matrix2[2][2];
	int matrix3[2][2];
	int i,j,mul;
	printf("The elements of matrix 1 is :\n");
	for(i=0;i<2;i++) {
		for(j=0;j<2;j++)
		{
			scanf("%d",&matrix1[i][j]);
		}
	}
	printf("The elements of matrix 2: \n");
	for(i=0;i<2;i++) {
		for(j=0;j<2;j++)
		{
			scanf("%d",&matrix2[i][j]);
		}
	}

	for(i=0;i<2;i++) {
		for(j=0;j<2;j++)
		{
			int k=0;
			sum =0;
			for(k=0;k<2;k++)
			{
				mul = mul+(matrix1[i][k]*matrix2[k][j]);
				matrix3[i][j]=sum;
			}


		}
	}

	printf("The resultant matrix is: \n");
		for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t", matrix3[i][j]);
		}
		printf("\n");
	}
}
