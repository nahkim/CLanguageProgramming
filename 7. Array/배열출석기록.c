#include <stdio.h>
#define SIZE 16

int main(void)
{
	int att_book[SIZE] = { 0 };
	int i, count = 0;


	for (i = 0; i < SIZE; i++) {
		printf("%d번째 강의에 출석하셨나요(출석은 1, 결석은 0) :", i + 1);
		scanf("%d", &att_book[i]);
	}

	// 배열을 검사하여서 결석한횟수를 계산한다.
	for (i = 0; i < SIZE; i++) {
		if (att_book[i] == 0)
			count++;
	}
	// 이번 학기 결석률을 계산한다.
	double ratio = count / 16.0;
	if (ratio > 0.3)
		printf("수업 일수 부족입니다.(%f%%). \n", ratio * 100.0);

	return 0;
}