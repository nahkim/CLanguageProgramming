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

	printf("���� ��ǥ�� �Է��Ͻÿ�(x  y): ");
	scanf("%d %d", &p1.x, &p1.y);

	printf("���� ��ǥ�� �Է��Ͻÿ�(x  y): ");
	scanf("%d %d", &p2.x, &p2.y);

	xdiff = p2.x -p1.x;
	ydiff = p2.y -p1.y;
	dist = sqrt(xdiff * xdiff + ydiff * ydiff);	//(x�������� ���� + y�������� ����)�� ��Ʈ


	//sqrt(x); ->x�� ��Ʈ���� return�ϴ� �Լ� 

	printf("�� �������� �Ÿ��� %f�Դϴ�.\n", dist);

	return 0;
}
