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
		printf("�л����� ������ �Է��Ͻÿ�: ");
		scanf("%d", &scores[i]);

	}
	for (i = 0; i < STUDENTS; i++)
		sum += scores[i];


	average = (double)sum / STUDENTS;//�̰� �����ؼ� �Ǽ����� ����� �������� �غ�����


	printf("���� ���= %lf\n", average);

	for (i = 0; i < STUDENTS; i++)
	{
		printf("%d��° �л��� ���� %d \n", i, scores[i]);
	}

	return 0;
}
