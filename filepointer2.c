#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *fptr; // create a file pointer
	int num; // variable num of type int
	fptr = fopen("umesh.txt","r"); // now open the file in read mode
	if(fptr == NULL)
	{
		printf("Error, File does not exist");
		exit(1);
	}
	fscanf(fptr,"%d",&num);
	printf("The number stored in the file is: %d",num);
}
