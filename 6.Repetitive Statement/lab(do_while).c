#include <stdio.h>

int main(void)
{
	int answer = 48;
	int guess;
	int tries = 0;
	
	//반복 구조
	do {
		printf("정답을 추측하여 보시오: ");
		scanf("%d", &guess);
		tries++;

			if (answer > guess)
				printf("제시한 정수보다 큽니다.\n");
			else if (answer < guess)
				printf("제시한 정수보다 작습니다.\n");
	} while (guess != answer);

	printf("축하합니다. 시도횟수=%d\n", tries);
	return 0;
}