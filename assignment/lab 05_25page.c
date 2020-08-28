#include <stdio.h> //문장을 하나 입력 받고, 정확히 같은 문장을 치면 correct라고 출력되게 하세요.
//그 후, 입력 된 문장을 단어별로 분리하여 출력되게 하세요.
int main(void)
{
	char first[100] = {0};
	char second[100] = { 0 };


	printf("Insert a sentence: ");
	gets_s(first, 99);

	printf("Insert the same: ");
	gets_s(second, 99);

	int i = 0;
	for (i=0;i<sizeof(first);i++)
	{
		if (first[i] != second[i]) {
			printf("wrong!!\n");
			return 0;
		}
		
	}
	printf("correct!!\n");

	printf("Words are: ");
	for (i = 0; i < sizeof(first); i++)
	{
		if (first[i] == ' ')
			printf("\n");
		else
			printf("%c",first[i]);
	}
	

	return 0;
}
