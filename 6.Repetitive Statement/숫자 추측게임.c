#include <stdio.h>
int main(void)
{
	int answer = 59;     // ����
	int guess;
	int tries = 0;
	do {
		printf("���ڸ� �Է��Ͻÿ�:");
		scanf("%d", &guess);
		if (answer < guess)
		printf("�Է°��� ���亸�� �����ϴ�.\n");
		else if (answer > guess)
			printf("�Է°��� ���亸�� �����ϴ�.\n");
		tries++;


	} while (guess != answer);
		printf("�����մϴ�. �õ�Ƚ��=%d", tries);
		return 0;
}