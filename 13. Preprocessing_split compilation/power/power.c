// ���� �ҽ� ����
#include "power.h"		// ��ǻ� ��� ��
double power(int x, int y)
{
	double result = 1.0;
	int i;

	for (i = 0; i < y; i++)
		result *= x;

	return result;
}
