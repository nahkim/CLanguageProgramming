#include <stdio.h>

main(void)
{
	long fact = 1;
	int i, n;
	
	printf("숫자를 입력하세요:");
	scanf("%d", &n);

	i = 1;
	while (i <= n)
	{
		fact = fact * i;

		i++;
	}
	printf("%d!은 %d 입니다.", n, fact);

	return 0;
}