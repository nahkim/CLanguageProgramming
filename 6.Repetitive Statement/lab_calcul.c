#include <stdio.h>
#include <stdlib.h>

int main(void)
{	
	int i, ans;
	printf("산수 문제를 자동으로 출제합니다.\n");

	while (1)
	{
		int x = rand() % 100;
		int y = rand() % 100;

		printf("%d + %d = ", x, y);
		scanf("%d", &ans);

		if (ans == x + y)
		{
			printf("맞았습니다.");
			break;
		}
		else
			printf("틀렸습니다.");
	}

	return 0;
}