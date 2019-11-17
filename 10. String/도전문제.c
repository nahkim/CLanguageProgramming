#include <stdio.h>
#include <time.h>

int main(void) 
{
	char solution[100] = {0};
	char solution1[100] = "meet at midnight";
	char solution2[100] = "my name is baek";
	char solution3[100] = "your name is kim";
	char solution4[100] = "ask my name";
	char solution5[100] = "eat when you hungry";

	char answer[100] = { 0 };
	char answer1[100] = "____ __ ________";
	char answer2[100] = "__ ____ __ ____";
	char answer3[100] = "____ ____ __ ___";
	char answer4[100] = "___ __ ____";
	char answer5[100] = "___ ____ ___ _____";

	srand(time(NULL));
	int ran = rand() % 5;

	switch (ran)
	{
	case 0: strcpy(solution, solution1); strcpy(answer, answer1); break;
	case 1: strcpy(solution, solution2); strcpy(answer, answer2); break;
	case 2: strcpy(solution, solution3); strcpy(answer, answer3); break;
	case 3: strcpy(solution, solution4); strcpy(answer, answer4); break;
	case 4: strcpy(solution, solution5); strcpy(answer, answer5); break;

	}


	char ch;
	int i;

	while (1) {
		printf("\n문자열을 입력하시오: %s \n", answer);
		printf("글자를 추측하시오: ");
		ch = getch();	//0 == NULL == '\0'
		for (i = 0; solution[i] != NULL; i++) {
			if (solution[i] == ch)
				answer[i] = ch;
		}
		if (strcmp(solution, answer) == 0) break;
	}

	printf("%s", answer);


	return 0;
}
