//write a program to enter the numbers from 1 to 10
//read the data from the file and print it


#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main()
{
	int s;
	char c;
	FILE *fshri;
	fshri = fopen("shri.txt","w");
	if ( fshri == NULL )
	{
		printf("file not created");
		exit(1);
	}
	for(s=1;s<11;s++)
	{
		fprintf(fshri,"%d",s);
	}
	fclose(fshri);
	fshri = fopen("shri.txt","r");
	if ( fshri == NULL )
	{
		printf("file not opening");
		exit(1);
	}
	while((c=fgetc(fshri))!=EOF)
	{
		putchar(c);
	}
	fclose(fshri);
}
