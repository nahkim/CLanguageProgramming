#include <stdio.h>
#include <math.h>

struct point {
	int x;
	int y;
};

int main(void)
{
	struct point p1, p2;

	double xdiff, ydiff;
	double dist;

	printf("점의 좌표를 입력하시오(x  y): ");
	scanf("%d %d", &p1.x, &p1.y);

	printf("점의 좌표를 입력하시오(x  y): ");
	scanf("%d %d", &p2.x, &p2.y);

	xdiff = p2.x -p1.x;
	ydiff = p2.y -p1.y;
	dist = sqrt(xdiff * xdiff + ydiff * ydiff);	//(x증가량의 제곱 + y증가량의 제곱)의 루트


	//sqrt(x); ->x의 루트값을 return하는 함수 

	printf("두 점사이의 거리는 %f입니다.\n", dist);

	return 0;
}
