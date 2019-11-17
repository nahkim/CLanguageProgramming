#include <stdio.h>

#define SIZE 6

void mystrcpy(char first[], char second[])
{
	int i = 0;
	while (second[i] != '\0')
	{
		first[i] = second[i];
		i++;

	}
	first[i] = '\0';
	
	//for(i=0;strlen(second)+1;i++)
	//{
	//
	//}
}
int main(void)
{
	int i, k;
	char fruits[SIZE][20] = {
		"pineapple",
		"banana",
		"apple",
		"tomato",
		"pear",
		"avocado"
	};

	for (k = 0; k < SIZE; k++) {
		for (i = 0; i < SIZE - 1; i++) {
			if (strcmp(fruits[i], fruits[i + 1]) > 0) {
				char tmp[20];
				mystrcpy(tmp, fruits[i]);
				mystrcpy(fruits[i], fruits[i + 1]);
				mystrcpy(fruits[i + 1], tmp);
			}
		}
	}
	for (k = 0; k < SIZE; k++)
		printf("%s \n", fruits[k]);
	return 0;
}
