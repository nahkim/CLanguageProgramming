#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 

int main(void)
{
	int user, computer;
	srand(time(NULL));

	printf("가위, 바위, 보 게임에 오신 것을 환영합니다. \n");
	printf("하나를 선택하세요(가위-0, 바위-1, 보-2): ");
	scanf("%d", &user);		// 사용자로부터 정수를 입력받는다. 

	computer = rand() % 3;	// 컴퓨터가 난수를 발생하여서 정수를 선택한다.
	//printf("사용자=%d \n", user);
	//printf("컴퓨터=%d \n", computer);

	/*
	switch (user)
	{
		case 0: printf("사용자=가위\n"); break;
		case 1: printf("사용자=바위\n"); break;
		case 2: printf("사용자=보\n"); break;
		//default: break;
	}

	switch (computer)
	{
	case 0: printf("컴퓨터=가위\n"); break;
	case 1: printf("컴퓨터=바위\n"); break;
	case 2: printf("컴퓨터=보\n"); break;
		//default: break;
	}
	*/
	
	if (user == 0) printf("사용자=가위\n");
	else if (user == 1) printf("사용자=바위\n");
	else if (user == 2) printf("사용자=보\n");
	else
		;

	if (computer == 0) printf("컴퓨터=가위\n");
	else if (computer == 1) printf("컴퓨터=바위\n");
	else if (computer == 2) printf("컴퓨터=보\n");
	else
		;

	

	if ((user + 1) % 3 == computer)
		printf("컴퓨터 승리 \n");
	else if (computer == user)
		printf("비겼음 \n");
	else
		printf("사용자 승리 \n");

	return 0;
}