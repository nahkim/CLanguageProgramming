#include <stdio.h>

main(void)
{
	int n, i, sum;

	printf("더하고싶은 값: ");
	scanf("%d", &n);

	sum = 0;
	i = 1;

	while (i <= n)
	{
		sum += i;
		i++;

	}
	printf("1부터 %d까지의 합은 %d 입니다.\n", n, sum);

	return 0;
}