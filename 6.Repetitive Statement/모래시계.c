#include <stdio.h>

main(void)
{
	int i, j;

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j<i; j++)
		{
			printf(" ");
		}
		for (j = 0; j<10-i*2;j++)
		{
			printf("*");
		}
		printf("\n");

	}
	
	for (i = 4;i>=0 ; i--)
	{
		for (j=0;i>j ;j++)
		{
			printf(" ");
		}
		for (j = 0;j<10-i*2 ;j++ )
		{
			printf("*");
		}
		printf("\n");

	}
	return 0;
}

	