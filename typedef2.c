#include <stdio.h>
typedef struct employee
{
	int empl_no;
	char name[40];
	char designation[30];
	char deptt[20];
}emp;

emp e1 = {1, "Dr.Umesh Dutta", "Director", "MRIIC"};

int main(void)
{
	printf("\nEmployee id is: %d",e1.empl_no);
	printf("\nName of employee is:%s",e1.name);
	printf("\nDesignation is:%s",e1.designation);
	printf("\nDepartment is:%s",e1.deptt);
} 

