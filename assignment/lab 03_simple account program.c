#include <stdio.h>

int balance;	//������ �ܰ� ����ϴ� ��������, �ʱ�ȭ�� ���ص� �ڵ����� 0���� �ʱ�ȭ��.

void save(int amount);	//amount��ŭ �ܰ� ������Ű�� �Լ�
void draw(int amount);	//amount��ŭ �ܰ� ���ҽ�Ű�� �Լ�

int main()
{
	/*save(100);	//amount�� �����ص� �ǰ� scanf�� �Ἥ �Է� �޾Ƶ� �˴ϴ�.
	draw(50);
	save(100);
	draw(50);
	*/
	int a, b;
	do{
		
		printf("�ܰ� �ֱ�: ", &b);
		scanf("%d", &b);
		printf("save or draw ����(1,2):");
		scanf("%d", &a);

		if (a == 1)
			save(b);
		else if(a==2)
			draw(b);

	} while (a != 3);
	return 0;
}

void save(int amount)	//amount��ŭ �ܰ� ������Ű�� ���, �Լ��� �Ҹ� Ƚ�� ���
{
	static int count = 0;
	balance += amount;
	count += 1;
	
	printf("������ �ܰ�� %d�Դϴ�.\n", balance);
	printf("save �Լ��� �Ҹ� Ƚ���� %d�Դϴ�.\n", count);
}

void draw(int amount)	//amount��ŭ �ܰ� ���ҽ�Ű�� ���, �Լ��� �Ҹ� Ƚ�� ���
{
	static int count = 0;
	balance -= amount;
	count += 1;
	printf("������ �ܰ�� %d�Դϴ�.\n", balance);
	printf("draw �Լ��� �Ҹ� Ƚ���� %d�Դϴ�.\n", count);
}