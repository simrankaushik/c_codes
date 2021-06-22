#include <stdio.h>
int main(void)
{
	int *c; // c is a pointer variable
	int a = 10;
	c = &a; // c will point towards a variable
	// c is holding the address of variable a 
	// i want to print the value using c variable only
	printf("The value stored at address pointed by c is:%d",*c);
	printf("\nThe address of variable c is: %p",&c);
	a = 20;
	printf("\nThe new value stored at address pointed by c is:%d",*c);
}
