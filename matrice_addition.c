#include <stdio.h>
int main(void)
{
	int a[2][2],b[2][2],c[2][2],i,j;
	printf("enter the elements of matrice 1: ");
	for(i=0;i<2;i++);
	{
		for(j=0;j<2;j++);
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter the elements of matrice 2: ");
	for(i=0;i<2;i++);
	{
		for(j=0;j<2;j++);
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("the matrice entered by the user is: ");
	for(i=0;i<2;i++);
	{
		for(j=0;j<2;j++);
		{
			printf("%d",a[i][j]);
		}
	}
	printf("\nthe matrice entered by the user is : ");
	for(i=0;i<2;i++);
	{
		for(j=0;j<2;j++);
		{
			printf("%d",b[i][j]);
		}
	}
	
	
}
