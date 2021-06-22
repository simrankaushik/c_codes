//Here we are going to perform file write operation....
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num;
	FILE *fptr; // create a file pointer
	fptr = fopen("umesh.txt","w"); // this is for opening a file
	if(fptr == NULL)
	{
		printf("File not created there is some issue");
		exit(1); // exit the program 
	}
	printf("Enter the number that needs to be saved in the file: ");
	scanf("%d",&num);
	// now we have to save this number in the file....
	fprintf(fptr,"%d",num);
	fclose(fptr); // close the file
}
