#include <stdio.h>
#define SIZE 16

int main(void)
{
	int att_book[SIZE] = { 0 };
	int i, count = 0;


	for (i = 0; i < SIZE; i++) {
		printf("%d��° ���ǿ� �⼮�ϼ̳���(�⼮�� 1, �Ἦ�� 0) :", i + 1);
		scanf("%d", &att_book[i]);
	}

	// �迭�� �˻��Ͽ��� �Ἦ��Ƚ���� ����Ѵ�.
	for (i = 0; i < SIZE; i++) {
		if (att_book[i] == 0)
			count++;
	}
	// �̹� �б� �Ἦ���� ����Ѵ�.
	double ratio = count / 16.0;
	if (ratio > 0.3)
		printf("���� �ϼ� �����Դϴ�.(%f%%). \n", ratio * 100.0);

	return 0;
}