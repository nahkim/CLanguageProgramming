#include <stdio.h>



void myScanf(int* p)
{	
	
	printf("The address that p indicates is %d\n", p);
	printf("The valued addressed by p is %d\n", *p);

	printf("insert number:");

	//scanf("%d", p);
	scanf("%d", &(*p));
}



int main(void)
{
	int p;

	
	myScanf(&p);

	printf("the value that you inserted is %d \n",p);


	return 0;
}
