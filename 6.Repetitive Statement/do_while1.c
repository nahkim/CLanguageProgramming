// do-while ���� �̿��� �޴�

#include <stdio.h>

int main(void)
{
	int i = 0;
	do
	{
		printf("1---���Ͽ���\n");
		printf("2---���������ϱ�\n");
		printf("1---����\n");
		printf("�ϳ��� �����Ͻÿ�: ");
		scanf("%d", &i);
	} while (i < 1 || i > 3);

	printf("���õȸ޴�=%d\n", i);
	return 0;

}