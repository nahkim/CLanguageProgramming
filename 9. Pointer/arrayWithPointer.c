#include <stdio.h>

int main(void)
{
	int a[] = { 10, 20, 30, 40, 50 };
	int* p = a;

	printf("배열의 이름 = %u\n", a);						//10000
	printf("첫 번째 원소의 주소 = %u\n", &a[0]);			//10000
	printf("두 번째 원소의 주소 = %u\n", &a[1]);			//10004
	printf("세 번째 원소의 주소 = %u\n", &a[2]);			//10008

	printf("배열의 첫번째 원소값 = %u\n", *a);				//10
	//printf("배열의 첫번째 원소값 = %u\n", ++a);			//error!!
	printf("배열의 두번째 원소값 = %u\n", *++p);			//20
	printf("두 번째 원소의 주소 = %u\n", p);				//10004
	printf("%u\n", ++(*p));									//21

	return 0;
}
