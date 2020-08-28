#include <stdio.h>

int balance;	//현재의 잔고를 기억하는 전역변수, 초기화를 안해도 자동으로 0으로 초기화됨.

void save(int amount);	//amount만큼 잔고를 증가시키는 함수
void draw(int amount);	//amount만큼 잔고를 감소시키는 함수

int main()
{
	/*save(100);	//amount를 지정해도 되고 scanf를 써서 입력 받아도 됩니다.
	draw(50);
	save(100);
	draw(50);
	*/
	int a, b;
	do{
		
		printf("잔고 넣기: ", &b);
		scanf("%d", &b);
		printf("save or draw 선택(1,2):");
		scanf("%d", &a);

		if (a == 1)
			save(b);
		else if(a==2)
			draw(b);

	} while (a != 3);
	return 0;
}

void save(int amount)	//amount만큼 잔고를 증가시키고 출력, 함수가 불린 횟수 출력
{
	static int count = 0;
	balance += amount;
	count += 1;
	
	printf("현재의 잔고는 %d입니다.\n", balance);
	printf("save 함수가 불린 횟수는 %d입니다.\n", count);
}

void draw(int amount)	//amount만큼 잔고를 감소시키고 출력, 함수가 불린 횟수 출력
{
	static int count = 0;
	balance -= amount;
	count += 1;
	printf("현재의 잔고는 %d입니다.\n", balance);
	printf("draw 함수가 불린 횟수는 %d입니다.\n", count);
}