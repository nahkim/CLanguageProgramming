#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int i, j, ans;
	printf("��� ������ �ڵ����� �����մϴ�.\n");
	srand(time(NULL));

	while (1)
	{
		i = rand() % 100;
		j = rand() % 100;

		printf("%d+%d=", i, j);

		scanf("%d", &ans);

		if (i + j == ans)
		{
			printf("�¾ҽ��ϴ�.\n");
			break;			
		}

		printf("Ʋ�Ƚ��ϴ�.\n");
		
		
	}
	return 0;
}