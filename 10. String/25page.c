#include <stdio.h> //������ �ϳ� �Է� �ް�, ��Ȯ�� ���� ������ ġ�� correct��� ��µǰ� �ϼ���.
//�� ��, �Է� �� ������ �ܾ�� �и��Ͽ� ��µǰ� �ϼ���.
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
