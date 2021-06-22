// we will calculate factorial of a number entered by the user

#include <stdio.h>

int z; // declare a global variable z
// this will hold the factorial value

int fact(int i)
{
	z = 1;
	for(int m =1;m<=i;m++)
	{
		z = z*m;
	}
	return z;
}

int main(void)
{
	int n; // n will store the number entered by the user
	int result;
	printf("Eter the number:");
	scanf("%d",&n);
	if(n==0 || n==1)
	{
		printf("The factorial is: 1");
	}
	else
	{
		result = fact(n); // call the function fact
		printf("The fatorial of the number is: %d",result);
	}
}
