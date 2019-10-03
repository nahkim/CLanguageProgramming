// do-while 문을 이용한 메뉴

#include <stdio.h>

int main(void)
{
	int i = 0;
	do
	{
		printf("1---파일열기\n");
		printf("2---파일저장하기\n");
		printf("1---종료\n");
		printf("하나를 선택하시오: ");
		scanf("%d", &i);
	} while (i < 1 || i > 3);

	printf("선택된메뉴=%d\n", i);
	return 0;

}