#include <stdio.h>

main(void)
{
	int n, i, sum;

	printf("���ϰ���� ��: ");
	scanf("%d", &n);

	sum = 0;
	i = 1;

	while (i <= n)
	{
		sum += i;
		i++;

	}
	printf("1���� %d������ ���� %d �Դϴ�.\n", n, sum);

	return 0;
}