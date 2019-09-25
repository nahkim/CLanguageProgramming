#include <stdio.h>
int main(void)

{
	int x;
	int y;
	int result;


	printf("첫 번째 숫자를 입력하시오:");
	scanf("%d", &x);

	printf("두 번째 숫자를 입력하시오:");
	scanf("%d", &y);

	result = x + y;
	printf("두 수의 합=%d\n", result);
	result = x - y;
	printf("두 수의 차=%d\n", result);
	result = x * y;
	printf("두 수의 곱=%d\n", result);
	result = x / y;
	printf("두 수의 몫=%d\n", result);

	return 0;
}