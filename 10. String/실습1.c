#include <stdio.h> //문자열을 입력 받아 그 길이를 출력하는 함수를 완성하세요.

void calStringLength(char str[]);	

int main(void)
{
	char str[] = "I am a student at Incheon National University.";
		int i = 0;

	calStringLength(str);

	printf("%d\n", sizeof(str));
	

	return 0;
}

void calStringLength(char str[])
{
	int i = 0;
	while (str[i] != '\0') {
		
		printf("%c\n", str[i]);
		i++;
	}

	printf("문자열 %s 의 길이는 %d입니다.",str, i);

}