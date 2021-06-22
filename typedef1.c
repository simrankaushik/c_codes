//demonstration of typedef keyword

#include <stdio.h>
int main(void)
{
	typedef int Number;
	Number num1 = 20;
	Number num2 = 40;
	Number sum;
	sum = num1 + num2;
	printf("The sum is: %d",sum);
}
