#include <stdio.h>

int main(void)
{
	int v = 10;
	int* p;

	p = &v;

	printf("The current address of v is %d\n", &v);
	printf("The address pointed by p is %d\n", p);

	printf("The current value at the address pointed by p is %d\n", *p++);	//the value pointed by p is printed, and then p is increased

	printf("The address pointed by p is %d\n", p);

	printf("The current value at the address pointed by p is %d\n", *p);

	//(*p)++   <-  this operation cuases an runtime error because the value indicated by p is a garbage one

	printf("The address (pointed by p) deducted by 4 is %d\n", --p);

	//v = *p;

	printf("The address pointed by p is %d\n", (*p)++);
	printf("The address pointed by p is %d\n", (*p));

	printf("The address pointed by p is %d\n", ++(*p));

	return 0;
}
