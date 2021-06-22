#include <stdio.h>
#include <string.h>
union employee{
	int empl_no;
	char name[30];
	char designation[30];
	char deptt[30];
}emp;

int main(void){
	//acccessing the elements of union individually
	emp.empl_no = 1;
	printf("Employee id is:%d",emp.empl_no);
	strcpy(emp.name, "Umesh Dutta");
	printf("\nEmployee name is:%s",emp.name);
	strcpy(emp.designation,"Director");
	printf("\nEmployee designation is:%s",emp.designation);
	strcpy(emp.deptt,"MRIIC");
	printf("\nEmployee department is:%s",emp.deptt);
	// modification of union element and its effect on other elements
	emp.empl_no = 12;
	// now let us print the record after this modification
	printf("\nEmployee id is:%d",emp.empl_no);
	printf("\nEmployee name is:%s",emp.name);
	printf("\nEmployee department is:%s",emp.deptt);
	// see the result and you will observe data loss because of shared memory 
	// only one element of the union can be accessed at a given point of time
	
	// it is better to use structure than union for record keeping 
	// memory is not shared in union and every element has a different memory location
	// elements in structure can be accessed at any point of time
	// union has vulnerability because of shared memory used by elements 
}
