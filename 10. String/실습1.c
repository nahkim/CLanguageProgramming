#include <stdio.h> //���ڿ��� �Է� �޾� �� ���̸� ����ϴ� �Լ��� �ϼ��ϼ���.

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

	printf("���ڿ� %s �� ���̴� %d�Դϴ�.",str, i);

}