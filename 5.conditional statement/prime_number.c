#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int num;
	srand(time(NULL));

	num = rand() % 18 + 2;//2와 19사이의 랜덤수를 생성

	printf("생성된 수는 %d 입니다.\n", num);

	if ((num == 2) || (num == 3) || (num == 5) || (num == 7) || (num == 11) || (num == 13) || (num == 17) || (num == 19))
		printf("소수입니다.");
	else
		printf("소수가 아닙니다.");

	return 0;

}
