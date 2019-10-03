#include <stdio.h>

int main(void)
{
	long fact;
	int n,i;
	
	printf("정수를 입력하시오: ");
	scanf("%d", &n);

	for (i = 1, fact = 1; i <= n; i++)
		fact = fact * i;
	
	printf("%d!은 %d 입니다.", n, fact);
	return 0;

}