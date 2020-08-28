#include <stdio.h> //주어진 문자열을 한 문자씩 정확하게 치면 correct 라고 출력되게 하세요.
//틀리면 바로 종료 되게 하세요.

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
			//종료 -> return 0;
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
