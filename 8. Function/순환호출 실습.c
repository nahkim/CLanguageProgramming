#include <stdio.h>
long sum(int n); //��ȯȣ��� �Է¹��� ���� ������ ��� �� ���� ���ϴ� �Լ�����
			//sum �Լ� �ȿ� static ������ ����Ͽ� �� ȣ�� �� ȸ�� ���
int main(void)
{
	int x = 0, result;

	printf("������ �Է��Ͻÿ�:");
	scanf("%d", &x);

	result = sum(x);
	printf("%d ���� ��� ���� ���� %d�Դϴ�.\n", x, result);

		return 0;
}

int sum(int n)
{
	if (n == 1)
		return 1;
	else
		return n + sum(n - 1);
	//printf(���Լ��� ȣ��� �� ȸ���� %d�Դϴ�.\n��, );
}
