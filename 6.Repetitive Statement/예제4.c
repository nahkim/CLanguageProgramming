// while ���� �̿��� ������ ��� ���α׷�
#include <stdio.h>

main(void)
{
	int n, i;
	i = 1;

	printf("����ϰ� ���� ��: ");
	scanf("%d", &n);

	while (i <= 9)
	{
		printf("%d*%d=%d\n", n, i, n * i);
		i++;
	}
	return 0;
}