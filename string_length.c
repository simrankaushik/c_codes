/*
how we can take the string input from the user?
and then print the length of the string as o/p of the code
syntax: scanf("%s",string_var);
*/

#include <stdio.h>
#include <string.h>


int main(void)
{
	char name[100]; // declaration of string
	int n; // variable to hold string length
	printf("Enter the string\n");
	fgets(name,100,stdin);
	n = strlen(name);
	printf("The length of the entered string is:%d",n);
	printf("\nThe entered string by the user is:");
	puts(name);
}
