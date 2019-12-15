// 다중 소스 파일
#include "power.h"		// 사실상 없어도 됨
double power(int x, int y)
{
	double result = 1.0;
	int i;

	for (i = 0; i < y; i++)
		result *= x;

	return result;
}
