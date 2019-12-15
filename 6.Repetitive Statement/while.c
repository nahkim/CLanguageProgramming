#include <stdio.h>

int main(void)
{
	int i = 3;
	long factorial = 1;
	
	while (i > 0)
	{
		factorial *= i;
		i--;
	}
	printf("%d \n", factorial);
	return 0;
}