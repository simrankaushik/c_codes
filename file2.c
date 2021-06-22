//to read the data in the file and print it

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main()
{
	char s[100];
	char c;
	FILE *fsimran;
	fsimran = fopen("simran.txt","r");
	if(fsimran == NULL)
	{
		printf("file is not created");
		exit(1);
	}
	while((c = fgetc(fsimran))!=EOF)
	{
		putchar(c);
	}
	//fscanf(fsimran,"%s",&s);
	//printf("\nthe data in the file is: %s",s);
	fclose(fsimran);
}

