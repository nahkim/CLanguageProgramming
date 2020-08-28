#include <stdio.h>
//typedef struct point POINT;

typedef struct point {
	int    x;
	int    y;	
}POINT;

POINT callByValue(POINT p)
{
	int temp;
	temp = p.x;
	p.x = p.y;
	p.y = temp;
	return p;
	
}

int main(void)
{

	POINT p;
	p.x = 10;
	p.y = 20;

	printf("before call function: p.x: %d p.y: %d\n", p.x, p.y);

	p = callByValue(p);

	printf("after call function: p.x: %d p.y: %d\n", p.x, p.y);

	return 0;
}
