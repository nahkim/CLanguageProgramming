#include <stdio.h>
#include <string.h>

int main(void)
{
	char src[] = "Hello";		//ũ�� 6
	char dst[] = "Hollywood";	//ũ�� 10

		strcpy(dst, src);
	printf("����� ���ڿ� = %s \n", dst); //������ ��µɱ��?	=Hello
															//���� dst[] �ȿ��� ������ ��� �������?		Hello'\0'ood'\0'
	return 0;                                          // src = ��Hollywood�� �̰�
}                                                            // dst = ��Hello�� �̸� ��� �ɱ��?			������ ����.
