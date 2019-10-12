#include <stdio.h>
#define STUDENTS 10

int main(void)
{
	int scores[STUDENTS];
	int sum = 0;
	int i;
	double average;;
	for (i = 0; i < STUDENTS; i++)
	{
		printf("학생들의 성적을 입력하시오: ");
		scanf("%d", &scores[i]);

	}
	for (i = 0; i < STUDENTS; i++)
		sum += scores[i];


	average = (double)sum / STUDENTS;//이곳 수정해서 실수형의 평균이 나오도록 해보세요


	printf("성적 평균= %lf\n", average);

	for (i = 0; i < STUDENTS; i++)
	{
		printf("%d번째 학생의 성적 %d \n", i, scores[i]);
	}

	return 0;
}
