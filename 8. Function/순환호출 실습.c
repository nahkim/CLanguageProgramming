#include <stdio.h>
long sum(int n); //순환호출로 입력받은 정수 이하의 모든 수 합을 구하는 함수구현
			//sum 함수 안에 static 변수를 사용하여 총 호출 된 회수 출력
int main(void)
{
	int x = 0, result;

	printf("정수를 입력하시오:");
	scanf("%d", &x);

	result = sum(x);
	printf("%d 이하 모든 수의 합은 %d입니다.\n", x, result);

		return 0;
}

int sum(int n)
{
	if (n == 1)
		return 1;
	else
		return n + sum(n - 1);
	//printf(“함수가 호출된 총 회수는 %d입니다.\n“, );
}
