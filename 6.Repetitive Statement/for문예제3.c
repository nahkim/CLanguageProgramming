#include <stdio.h>

int main(void)
{
	long fact;
	int n,i;
	
	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &n);

	for (i = 1, fact = 1; i <= n; i++)
		fact = fact * i;
	
	printf("%d!�� %d �Դϴ�.", n, fact);
	return 0;

}