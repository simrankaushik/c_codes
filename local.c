#include<stdio.h>
int b;

void srinidhi()
{
	printf("\n%d",b);
}

void main()
{
	int a;
	printf("Enter the value of number :");
	scanf("%d",&a);
	b=2*a;
	srinidhi();
}
