#include <stdio.h>

int main(void)
{
	int v = 10;  // 정수를 담는 변수
	int* p;		 // 정수의 주소를 담는 변수(정수를 담는 변수의 주소를 담는 변수)

	p = &v;		// 변수의 주소를 담았다

	printf("The current address of v is %d\n", &v);	//10000
	printf("The address pointed by p is %d\n", p);	//10000

	printf("The current value at the address pointed by p is %d\n", *p++);	//the value pointed by p is printed, and then p is increased
	// 10나옴

	printf("The address pointed by p is %d\n", p);		//10004

	printf("The current value at the address pointed by p is %d\n", *p);	//쓰레기값

	//(*p)++   <-  this operation cuases an runtime error because the value indicated by p is a garbage one
	// p의 값이 쓰레기값이라서

	printf("The address (pointed by p) deducted by 4 is %d\n", --p);
	// 10000

	//v = *p;

	printf("The address pointed by p is %d\n", (*p)++);	//10
	printf("The address pointed by p is %d\n", (*p));	//11

	printf("The address pointed by p is %d\n", ++(*p));	//12

	return 0;
}
