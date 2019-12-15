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
		printf("학번을 입력하시오: ");
		scanf("%d", &data[i].number);
		printf("이름을 입력하시오: ");
		scanf("%s", data[i].name);
		printf("학점을 입력하시오(실수):");
		scanf("%lf", &data[i].grade);
		printf("\n");
		
	}
	for (i=0;i<SIZE;i++)
	{
		printf("학번: %d, 이름: %s, 학점: %lf\n",data[i].number,data[i].name,data[i].grade);
	}


}
