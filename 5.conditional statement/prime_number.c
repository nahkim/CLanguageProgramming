#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int num;
	srand(time(NULL));

	num = rand() % 18 + 2;//2�� 19������ �������� ����

	printf("������ ���� %d �Դϴ�.\n", num);

	if ((num == 2) || (num == 3) || (num == 5) || (num == 7) || (num == 11) || (num == 13) || (num == 17) || (num == 19))
		printf("�Ҽ��Դϴ�.");
	else
		printf("�Ҽ��� �ƴմϴ�.");

	return 0;

}
