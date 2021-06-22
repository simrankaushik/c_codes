//Here we are going to perform file write operation....
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char s[100]; // define character array s
	FILE *fptr; // create a file pointer
	fptr = fopen("umesh.txt","w"); // this is for opening a file
	if(fptr == NULL)
	{
		printf("File not created there is some issue");
		exit(1); // exit the program 
	}
	printf("\n Enter few lines as per your liking: ");
	fgets(s,100,stdin);
	fputs(s,fptr);
	fclose(fptr); // close the file
}
