#include <stdio.h>
#define SIZE 3

struct student {
	int number;
	char name[20];
	double grade;
};

int main(void)
{	
	int i = 0;
	struct student data[SIZE];

	for (i = 0; i < SIZE; i++)
	{
		printf("�й��� �Է��Ͻÿ�: ");
		scanf("%d", &data[i].number);
		printf("�̸��� �Է��Ͻÿ�: ");
		scanf("%s", data[i].name);
		printf("������ �Է��Ͻÿ�(�Ǽ�):");
		scanf("%lf", &data[i].grade);
		printf("\n");
		
	}
	for (i=0;i<SIZE;i++)
	{
		printf("�й�: %d, �̸�: %s, ����: %lf\n",data[i].number,data[i].name,data[i].grade);
	}


}
