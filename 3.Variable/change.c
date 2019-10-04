#include <stdio.h>
#define EXCHANGE_RATE	1120		//기호 상수 정의

int main(void)
{
	int usd;		// 달러화
	int krw;		// 원화

	printf("달러화 금액을 입력하시오: ");
	scanf("%d", &usd);

	krw = EXCHANGE_RATE * usd;

	printf("달러화 %d 달러는 %d원 입니다.", usd, krw);

	return 0;
}