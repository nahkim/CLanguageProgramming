#include <stdio.h>

int main(void)
{
	int i,sum,n;
	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &n);

	sum = 0;
	for(i = 1; i <= n; i++)
		sum += i;

	printf("1���� %d ������ ���� %d �Դϴ�.", n, sum);
	return 0;
}