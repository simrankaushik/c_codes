//implementation of a program using #define

// the difference between typedef and #define is that you can use #define
// for values as well as data types but typedef is onlye used for data types

#include <stdio.h>
#define TRUE 1
#define FALSE 0
int main(void)
{
	printf("The value of TRUE is %d",TRUE);
	printf("\nThe value of FALSE is %d", FALSE);
}
