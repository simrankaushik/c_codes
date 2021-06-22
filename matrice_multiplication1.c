#include <stdio.h>
void main()
{ 
  int m, n, p, q, i, j, a[4][4], b[4][4];
  printf("enter the dimension of matrice 1");
  printf("\nenter the number of rows: ");
  scanf("%d",&m);
  printf("enter the number of columns: ");
  scanf("%d",&n);
  printf("the dimensions of the matrice is: %d x %d",m,n);
  printf("\n******************");
  printf("\nenter the elements of matrice 2");
  printf("\nenter the number of rows: ");
  scanf("%d",&p);
  printf("enter the number of columns: ");
  scanf("%d",&q);
  printf("the dimensions of the matrice is: %d x %d",p,q);
  printf("\n******************");
  if(n == p)
  {
  	printf("multiplication is possible for the entered dimensions");
  	printf("enter the elements of matrice 1: ");
	for(i=0;i<m;i++);
	{
		for(j=0;j<n;j++);
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter the elements of matrice 2: ");
	for(i=0;i<n;i++);
	{
		for(j=0;j<q;j++);
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("\n******************");
		printf("the matrice entered by the user is: ");
		for(i=0;i<m;i++);
		{
		for(j=0;j<n;j++);
			{
				printf("%d",a[i][j]);
			}
		}
	printf("\nthe matrice entered by the user is : ");
	for(i=0;i<p;i++);
	{
		for(j=0;j<q;j++);
		{
			printf("%d",b[i][j]);
		}
	}
  printf("\n******************");
	}
}
