#include <stdio.h>
#define PI 3.141592

int main(void)
{
	double radius;
	double area;

	printf("원의 반지름을 입력하시요: ");
	scanf("%lf", &radius);

	area = radius * radius * PI;

	printf("원의 면적: %lf \n", area);

	return 0;

}