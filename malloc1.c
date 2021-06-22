#include <stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
	char *temp;
	//temp = malloc(20*sizeof(char));
	temp = calloc(20, sizeof(char));
	if (temp == NULL)
	{
		printf("memory cannot be alocated");
	}
	else
	{
		temp = realloc(temp,50*sizeof(char));
		strcpy(temp,"i live in faridabad which is in haryana");
		printf("dynamically alloted memory content is :%s",temp);
	}
	free(temp);
}
