#include <stdio.h>

int main(void)
{
	int money;
	int price;

	printf("���� ������ �ִ� ��: ");
	scanf("%d", &money);
	printf("ĵ���� ����: ");
	scanf("%d", &price);


	printf("�ִ�� �� �� �ִ� ĵ���� ����=%d\n", money / price);
	printf("ĵ�� ���� �� ���� ��=%d\n", money % price);

	return 0;

}