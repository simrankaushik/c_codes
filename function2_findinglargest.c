//we are trying to find the largest of three numbers
// we have to use pointer in this program

//step 1: i will ask user for three numbers store in variables
//step 2: i will call a function and pass the variable value in it
// the memory location of the largest number will be returned
// i will use this memory address in main function to print the
//largest value on terminal

#include <stdio.h>
int largest;

int *find_largest(int x, int y, int z)
{
	
	largest = x;
	if(y>largest)
	{
		largest = y;
	}
	if(z>largest)
	{
		largest = z;
	}
	return(&largest); // return the address of largest variable
}

int main(void)
{
	int a, b, c;
	int *ptr; // declare a pointer variable
	printf("Enter the three numbers:");
	scanf("%d %d %d", &a, &b, &c);
	printf("The number entered by you are:%d,%d,%d",a,b,c);
	ptr = find_largest(a,b,c);
	printf("\nThe value of largest number is:%d",*ptr);
}
