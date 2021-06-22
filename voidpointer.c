// in this example we will learn the concept of void pointer

// this is how we define void pointer in C void *vptr

#include <stdio.h>

int main(void)
{
	int x = 100;
	float y = 40.4;
	//int *iptr;
	//float *fptr;
	void *vptr;
	//iptr = &x;
	//fptr = &y;
	// now lets use vptr
	vptr = &x;
	// if i want to print the value pointed by vptr
	
	printf("x = %d", *((int *)vptr));
	
	vptr = &y; // vptr now points towards float value 
	// now let us print float value using vptr
	printf("\ny = %.1f", *((float *)vptr));  
}
