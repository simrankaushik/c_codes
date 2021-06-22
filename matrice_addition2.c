#include<stdio.h>
int main(void)
{
	int a[2][2],b[2][2],c[2][2], i, j;
	printf("Enter the elements of matrix 1: ");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("The matrix 1 entered by user is:\n");
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	
	printf("Enter the elements of matrix 2: ");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("The matrix 2 entered by user is:\n");
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
	//logic for addition is implemented here
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			c[i][j] = a[i][j]+b[i][j];
		}
	}
	//addition logic ends here
	printf("The addition result is:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
	
}
