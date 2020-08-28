#include <stdio.h>

//typedef struct point POINT;

typedef struct point {
	int    x;		//10
	int    y;		//20
	int* px;		//x�� �ּ�
	int* py;		//y�� �ּ�
	//�� 16����Ʈ ¥�� ����ü
}POINT;

// struct point p�� ���ؼ� *(p.px) = 10
// p.x = 10, p.y = 20, p.px= x�� �ּ�=10000, p.py= y�� �ּ�=10004

//struct point pf�� ���ؼ�
// p.x = 10, p.y = 20, pf.px= x�� �ּ�=10000, pf.py= y�� �ּ�=10004

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

	p.px = &p.x;	//x �ּ�
	p.py = &p.y;	//y �ּ�


	printf("address of p.x  : %d\n", &p.x);		
	printf("address of p.y  : %d\n", &p.y);		//10004

	printf("address of p.x  : %d\n", p.px);		//10000
	printf("address of p.y  : %d\n", p.py);		//10004


	printf("before call function: p.x: %d p.y: %d\n", p.x, p.y);
	
	callByReference(p);

	printf("after call function: p.x: %d p.y: %d\n", p.x, p.y);

	return 0;
}
