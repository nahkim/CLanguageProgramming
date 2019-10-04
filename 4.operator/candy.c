#include <stdio.h>

int main(void)
{
	int money;
	int price;

	printf("현재 가지고 있는 돈: ");
	scanf("%d", &money);
	printf("캔디의 가격: ");
	scanf("%d", &price);


	printf("최대로 살 수 있는 캔디의 개수=%d\n", money / price);
	printf("캔디 구입 후 남은 돈=%d\n", money % price);

	return 0;

}