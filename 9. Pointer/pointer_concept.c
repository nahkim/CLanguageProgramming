#include <stdio.h>

int main(void)
{
	int v = 10;  // ������ ��� ����
	int* p;		 // ������ �ּҸ� ��� ����(������ ��� ������ �ּҸ� ��� ����)

	p = &v;		// ������ �ּҸ� ��Ҵ�

	printf("The current address of v is %d\n", &v);	//10000
	printf("The address pointed by p is %d\n", p);	//10000

	printf("The current value at the address pointed by p is %d\n", *p++);	//the value pointed by p is printed, and then p is increased
	// 10����

	printf("The address pointed by p is %d\n", p);		//10004

	printf("The current value at the address pointed by p is %d\n", *p);	//�����Ⱚ

	//(*p)++   <-  this operation cuases an runtime error because the value indicated by p is a garbage one
	// p�� ���� �����Ⱚ�̶�

	printf("The address (pointed by p) deducted by 4 is %d\n", --p);
	// 10000

	//v = *p;

	printf("The address pointed by p is %d\n", (*p)++);	//10
	printf("The address pointed by p is %d\n", (*p));	//11

	printf("The address pointed by p is %d\n", ++(*p));	//12

	return 0;
}
