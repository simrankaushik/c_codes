/*
In C Programming strings are important
character array which is NULL terminated
NULL character is represented by '\0'
char name[16] = "Dr. Umesh Dutta";
char name[16] = {'D','r','.',' ','U','M','E','S','H',' ','D','U','T','T','A','\0'};
*/

// to count the number of characters in string
#include <stdio.h>
int main(void)
{
	char name[] = "Dr. Umesh Dutta"; // this is a string declaration
	int n; // variable to hold the character count
	while(name[n]!='\0')
	{
		printf("%c",name[n]); // This prints the character
		n = n+1;
	}
	printf("\nThe number of characters in the string is: %d",n); 
}

