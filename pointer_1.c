/*
pointers concept in C programming
variable in C that holds the memory address of another variable
if we declare a pointer variable then we have to use asterick sign before
variable name

there are two important operators one is & (address of operator) and second one is
* (value of operator)
*/

#include <stdio.h>

int main(void)
{
int x = 786; // variable x is storing 786
int *ptr1; // this is a pointer variables
ptr1 = &x; // pointer variable ptr1 is holding memory address of x variable
printf("The value of x is: %d\n", x);
printf("The address of variable x is: %p",ptr1);
printf("\nThe value stored in the address location of ptr1 is: %d",*ptr1);
}
