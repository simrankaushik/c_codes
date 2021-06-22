//here in this program we are going to perform 
// file write operation,structure
//is used in the program

#include<stdio.h>
#include<stdlib.h>
void main()
{
	FILE *fptr;
	struct emp
	{
		char name[30];
		int age;
		float bs;
	};
	struct emp e;
	fptr = fopen("simran.txt","w");
	if(fptr == NULL)
	{
		printf("file is not created");
		exit(1);
	}
	printf("enter the name of the employee: ");
	gets(e.name);
	fflush(stdin);
	printf("\nenter the age: ");
	scanf("%d",&e.age);
	printf("\nenter the bs: ");
	scanf("%f",&e.bs);
	//now we are going to add data in the file 
	fprintf(fptr,"%s %d %f\n",e.name,e.age,e.bs);
	fclose(fptr);
	
}
