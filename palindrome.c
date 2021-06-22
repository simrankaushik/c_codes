#include <stdio.h>
#include <string.h>

void main()
{
	char name[100];
	char dupname[100];
	int x;
	printf("enter the string to be reversed : ");
	gets(name);
	printf("entered string is: ");
	puts(name);
	strcpy(dupname,name);
	strrev(dupname);
	printf("the reverse of the entered string is : ");
	puts(dupname);
	x = strcmp(name, dupname);
	if (x==0)
	{
		printf("entered string is a palindrome");
	}
	else
	{
		printf("entered string is not a palindrome");
	}
}
