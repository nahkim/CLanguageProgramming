#include <stdio.h>

int main(void)
{
	int a[] = { 10, 20, 30, 40, 50 };
	int* p = a;

	printf("�迭�� �̸� = %u\n", a);						//10000
	printf("ù ��° ������ �ּ� = %u\n", &a[0]);			//10000
	printf("�� ��° ������ �ּ� = %u\n", &a[1]);			//10004
	printf("�� ��° ������ �ּ� = %u\n", &a[2]);			//10008

	printf("�迭�� ù��° ���Ұ� = %u\n", *a);				//10
	//printf("�迭�� ù��° ���Ұ� = %u\n", ++a);			//error!!
	printf("�迭�� �ι�° ���Ұ� = %u\n", *++p);			//20
	printf("�� ��° ������ �ּ� = %u\n", p);				//10004
	printf("%u\n", ++(*p));									//21

	return 0;
}
