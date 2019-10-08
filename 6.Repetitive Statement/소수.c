#include <stdio.h>

int main(void)
{
	int i, j;
	int prime = 0;
	printf("2 ");
	for (i = 3; i<=1000; i++)
	{
		prime = 1;
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				prime = 0;
				break;
			}
			

			
		}
		if(prime==1)
			printf("%d ", i);
	}
	return 0;
}