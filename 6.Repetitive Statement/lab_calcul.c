#include <stdio.h>
#include <stdlib.h>

int main(void)
{	
	int i, ans;
	printf("��� ������ �ڵ����� �����մϴ�.\n");

	while (1)
	{
		int x = rand() % 100;
		int y = rand() % 100;

		printf("%d + %d = ", x, y);
		scanf("%d", &ans);

		if (ans == x + y)
		{
			printf("�¾ҽ��ϴ�.");
			break;
		}
		else
			printf("Ʋ�Ƚ��ϴ�.");
	}

	return 0;
}