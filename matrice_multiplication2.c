#include <stdio.h>

int main(void)
{
	int r1, c1, r2, c2, i, j, k, sum;
	int matrix1[5][5], matrix2[5][5], matrix3[5][5];
	printf("Enter the number of rows and columns in matrix 1: ");
	scanf("%d %d",&r1,&c1);
	printf("Enter the number of rows and columns in matrix 2: ");
	scanf("%d %d",&r2,&c2);
	if(c1!=r2)
	{
		printf("Matrix Multiplication is not possible \n");
	}
	else
	{
		printf("Matrix Multiplication is possible \n");
		printf("The resultant matrix will have dimensions of: \n%d x %d \n", r1, c2);
		printf("Enter the elements of matrix1:");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
				scanf("%d",&matrix1[i][j]);
			}
		}
		
		printf("Enter the elements of matrix2:");
		for(i=0;i<r2;i++)
		{
			for(j=0;j<c2;j++)
			{
				scanf("%d",&matrix2[i][j]);
			}
		}
		
		printf("The entered matices are... \n");
		printf("Matrix1: \n");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
				printf("%d \t",matrix1[i][j]);
			}
			printf("\n");
		}
		printf("Matrix2: \n");
		for(i=0;i<r2;i++)
		{
			for(j=0;j<c2;j++)
			{
				printf("%d \t",matrix2[i][j]);
			}
			printf("\n");
		}
		printf("Performing the multiplication of the two entered matrices...\n");
		
		sum =0;
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c2;j++)
			{
				for(k=0;k<c1;k++)
				{
					sum = sum + matrix1[i][k]*matrix2[k][j];
				}
				matrix3[i][j] = sum;
				sum = 0;
			}
		}
		
		printf("Marix multiplication result is:\n");
		
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c2;j++)
			{
				printf("%d \t", matrix3[i][j]);
			}
			printf("\n");
		}	
	}	
	
}
