#include <stdio.h>
#define SIZE 10

int main(void)
{
	int key, i;
	int list[SIZE] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };

	printf("[ ");
	for (i = 0; i < SIZE; i++) {
		printf("%d ", list[i]);
	}
	printf("]\n");

	printf("Ž���� ���� �Է��Ͻÿ�:");
	scanf("%d", &key);

	for (i = 0; i < SIZE; i++) {
		if (list[i] == key) {
			printf("Ž�� ���� �ε���= %d\n", i);
			break;  //return 0;
		}
	}
	//printf(��Ž�� ���С�)
	return 0;
}
