#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 

int main(void)
{
	int user, computer;
	srand(time(NULL));

	printf("����, ����, �� ���ӿ� ���� ���� ȯ���մϴ�. \n");
	printf("�ϳ��� �����ϼ���(����-0, ����-1, ��-2): ");
	scanf("%d", &user);		// ����ڷκ��� ������ �Է¹޴´�. 

	computer = rand() % 3;	// ��ǻ�Ͱ� ������ �߻��Ͽ��� ������ �����Ѵ�.
	//printf("�����=%d \n", user);
	//printf("��ǻ��=%d \n", computer);

	/*
	switch (user)
	{
		case 0: printf("�����=����\n"); break;
		case 1: printf("�����=����\n"); break;
		case 2: printf("�����=��\n"); break;
		//default: break;
	}

	switch (computer)
	{
	case 0: printf("��ǻ��=����\n"); break;
	case 1: printf("��ǻ��=����\n"); break;
	case 2: printf("��ǻ��=��\n"); break;
		//default: break;
	}
	*/
	
	if (user == 0) printf("�����=����\n");
	else if (user == 1) printf("�����=����\n");
	else if (user == 2) printf("�����=��\n");
	else
		;

	if (computer == 0) printf("��ǻ��=����\n");
	else if (computer == 1) printf("��ǻ��=����\n");
	else if (computer == 2) printf("��ǻ��=��\n");
	else
		;

	

	if ((user + 1) % 3 == computer)
		printf("��ǻ�� �¸� \n");
	else if (computer == user)
		printf("����� \n");
	else
		printf("����� �¸� \n");

	return 0;
}