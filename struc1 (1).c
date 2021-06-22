/*
structure in C Programming
reading employee record using structure and we will print it
*/

#include <stdio.h>

struct employee
{
int empl_no;
char name[40];
char designation[30];
char deptt[20];
}emp;

int main(void)
{
printf("Enter the employee id:");
scanf("%d",&emp.empl_no);
fflush(stdin); // empty the buffer
printf("\nEnter the name of employee: ");
gets(emp.name);
printf("\nEnter the designation of employee: ");
gets(emp.designation);
printf("\nEnter the department: ");
gets(emp.deptt);
printf("The record entered for the employee is:\n");
printf("\nEmployee Id:%d",emp.empl_no);
printf("\nEmployee name:%s",emp.name);
printf("\nDesignation:%s",emp.designation);
printf("\nDepartment:%s",emp.deptt);
}


