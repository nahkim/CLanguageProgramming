#include <stdio.h>
int main(void)
{
	int answer = 59;     // 정답
	int guess;
	int tries = 0;
	do {
		printf("숫자를 입력하시오:");
		scanf("%d", &guess);
		if (answer < guess)
		printf("입력값이 정답보다 높습니다.\n");
		else if (answer > guess)
			printf("입력값이 정답보다 낮습니다.\n");
		tries++;


	} while (guess != answer);
		printf("축하합니다. 시도횟수=%d", tries);
		return 0;
}