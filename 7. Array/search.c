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

	printf("Å½»öÇÒ °ªÀ» ÀÔ·ÂÇÏ½Ã¿À:");
	scanf("%d", &key);

	for (i = 0; i < SIZE; i++) {
		if (list[i] == key) {
			printf("Å½»ö ¼º°ø ÀÎµ¦½º= %d\n", i);
			break;  //return 0;
		}
	}
	//printf(¡°Å½»ö ½ÇÆÐ¡±)
	return 0;
}
