#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int i, j, ans;
	printf("산수 문제를 자동으로 출제합니다.\n");
	srand(time(NULL));

	while (1)
	{
		i = rand() % 100;
		j = rand() % 100;

		printf("%d+%d=", i, j);

		scanf("%d", &ans);

		if (i + j == ans)
		{
			printf("맞았습니다.\n");
			break;			
		}

		printf("틀렸습니다.\n");
		
		
	}
	return 0;
}