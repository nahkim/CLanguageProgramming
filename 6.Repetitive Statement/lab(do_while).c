#include <stdio.h>

int main(void)
{
	int answer = 48;
	int guess;
	int tries = 0;
	
	//�ݺ� ����
	do {
		printf("������ �����Ͽ� ���ÿ�: ");
		scanf("%d", &guess);
		tries++;

			if (answer > guess)
				printf("������ �������� Ů�ϴ�.\n");
			else if (answer < guess)
				printf("������ �������� �۽��ϴ�.\n");
	} while (guess != answer);

	printf("�����մϴ�. �õ�Ƚ��=%d\n", tries);
	return 0;
}