#include <stdio.h>

//typedef struct point POINT;

typedef struct point {
	int    x;		//10
	int    y;		//20
	int* px;		//x의 주소
	int* py;		//y의 주소
	//총 16바이트 짜리 구조체
}POINT;

// struct point p에 대해서 *(p.px) = 10
// p.x = 10, p.y = 20, p.px= x의 주소=10000, p.py= y의 주소=10004

//struct point pf에 대해서
// p.x = 10, p.y = 20, pf.px= x의 주소=10000, pf.py= y의 주소=10004

//*(pf.px) = 10, *(pf.py) = 20

void callByReference(POINT pf) 
{
	int temp;

	temp = *pf.px;
	*pf.px = *pf.py;
	*pf.py = temp;


	printf("address of pf.x  : %d\n", &pf.x);		//10000
	printf("address of pf.y  : %d\n", &pf.y);

	printf("address of pf.x  : %d\n", pf.px);
	printf("address of pf.y  : %d\n", pf.py);

}

int main(void)
{

	POINT p;
	p.x = 10;
	p.y = 20;

	p.px = &p.x;	//x 주소
	p.py = &p.y;	//y 주소


	printf("address of p.x  : %d\n", &p.x);		
	printf("address of p.y  : %d\n", &p.y);		//10004

	printf("address of p.x  : %d\n", p.px);		//10000
	printf("address of p.y  : %d\n", p.py);		//10004


	printf("before call function: p.x: %d p.y: %d\n", p.x, p.y);
	
	callByReference(p);

	printf("after call function: p.x: %d p.y: %d\n", p.x, p.y);

	return 0;
}
