#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main()
{
	char s[100];
	FILE *fsimran;
	fsimran = fopen("simran.txt","w");
	if(fsimran == NULL)
	{
		printf("file is not created");
		exit(1);
	}
	printf("\nenter few lines: ");
	fgets(s,100,stdin);
	fputs(s,fsimran);
	fclose(fsimran);
}

