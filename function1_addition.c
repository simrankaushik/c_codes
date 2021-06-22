//CONCEPT OF FUNCTION CALL BY REFERENCE
// we are performing addition of two numbers
// we will make use of function
// we will perform addition and we will make use of
// call by reference method when the addition function will be called
#include <stdio.h>
void my_add(int *x, int *y)
{
	int z;
	z = (*x)+(*y); // value of x will be added with value of y
	printf("The addition result is:%d",z);
}
int main(void)
{
	int a, b;
	printf("Enter the first number:");
	scanf("%d",&a);
	printf("Enter the second number:");
	scanf("%d",&b);
	my_add(&a,&b); // function call 
}
