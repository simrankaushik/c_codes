/*
The first task of the day is to reverse the string
You have to ask he user to enter a string 
Reverse the entered string and print it as output
For example: If I enter the string as UMESH DUTTA then 
reverse string will be DUTTA UMESH and it will be printed on the output screen
Just give it a thought I will be back....
Can you hear me...
*/
#include <stdio.h>
#include <string.h>
int main(void)
{
	char name[100]; // string for storing the user input
	char dupname[100]; // copy of the entered string
	printf("Enter the string:");
	fgets(name,100,stdin);
	printf("Entered string is:");
	puts(name);
	// make a copy
	strcpy(dupname,name);
	strrev(dupname);
	printf("the reverse of the netered string is:");
	puts(dupname);
}
