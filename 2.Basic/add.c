#include <stdio.h>

int main(void)
{
	int x;			// 첫 번째 정수를 저장할 변수
	int y;			// 두 번째 정수를 저장할 변수
	int sum;			// 2개의 정수의 합을 저장할 변수

	printf("첫 번째 숫자를 입력하시오:");	//입력 안내 메세지 출력
	scanf("%d", &x);							// 하나의 정수를 받아서 x에 저장

	printf("두 번째 숫자를 입력하시오:");	//입력 안내 메세지 출력
	scanf("%d", &y);							// 하나의 정수를 받아서 y에 저장

	sum = x + y;								//변수 2개를 더한다.
	printf("두 수의 합= %d \n", sum);		// sum의 값을 10진수 형태로 출력

	return 0;								// 0을 외부로 반환
}