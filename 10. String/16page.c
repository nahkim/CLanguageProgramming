#include <stdio.h> //�־��� ���ڿ��� �� ���ھ� ��Ȯ�ϰ� ġ�� correct ��� ��µǰ� �ϼ���.
//Ʋ���� �ٷ� ���� �ǰ� �ϼ���.

int main(void)
{
	char str[] = "Incheon";
	printf("%s\n", str);
	int i = 0;
	int ch = 0;
	//printf("%d", sizeof(str));
	
	/*
	while (str[i] != '\0')
	{
		printf("input: ");
		ch = getch();
		if (ch != str[i])
			//���� -> return 0;
		i++;
	}
	*/
	for (i = 0; i < sizeof(str) - 1;i++) {
		printf("input: ");
		ch = getch();
		putch(ch);
		printf("\n");

		if (ch != str[i]) {
			printf("wrong!!\n");
			return 0;
			
		}
		continue;

	
	}
	
	printf("corret!!\n");

	return 0;
}
