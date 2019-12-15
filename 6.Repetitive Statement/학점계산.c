#include <stdio.h>

int main(void)
{
	int score;

	printf("성적을 입력하시오: ");
	scanf("%d", &score);

	printf("학점 %c \n", score >= 90 ? 'A': score >= 80 ? 'B': score >= 70 ? 'C': score >= 60 ? 'D':'F');

	return 0;
}