#include <stdio.h>

main(void)
{
	long fact = 1;
	int i, n;
	
	printf("���ڸ� �Է��ϼ���:");
	scanf("%d", &n);

	i = 1;
	while (i <= n)
	{
		fact = fact * i;

		i++;
	}
	printf("%d!�� %d �Դϴ�.", n, fact);

	return 0;
}