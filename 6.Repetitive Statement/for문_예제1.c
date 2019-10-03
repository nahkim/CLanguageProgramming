#include <stdio.h>

int main(void)
{
	int i,sum,n;
	printf("정수를 입력하시오: ");
	scanf("%d", &n);

	sum = 0;
	for(i = 1; i <= n; i++)
		sum += i;

	printf("1부터 %d 까지의 합은 %d 입니다.", n, sum);
	return 0;
}