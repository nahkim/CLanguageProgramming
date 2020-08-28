#include <stdio.h>
#include <stdlib.h>

struct node {			// 구조체의 크기는 총12byte
	struct node* prev;	// 구조체는 4byte
	struct node* next;	// 구조체는 4byte
	int value;			// int는 4byte
};

struct node* init;		// struct node의 포인터(주소가 적혀있는 포인터) 4byte임

void insert(int v);		
void pop();				
void print();			

int main(void)
{
	insert(10); insert(20); insert(15); insert(17); insert(5);
	pop(); pop(); pop(); pop(); pop();	

	return 0;
}

void insert(int v)
{	
	struct node* ptr = (struct node*)malloc(sizeof(struct node));		// struct node 형태로 쓸것이다.
	ptr->value = v;		// ptr의 주소를 따라가서 value에 넣는다
	ptr->next = NULL;	// ptr의 주소를 따라가서 NULL을 넣는다
	ptr->prev = NULL;	// ptr의 주소를 따라가서 NULL을 넣는다

	if (init == NULL)	
	{
		init = ptr;		// 첫번째 struct를 가르키게함,전역변수는 함수안에 들어가면 0이됨
	}
	else {
		struct node* current = init;
		while (current->next != NULL)		// 마지막 노드라는 뜻
			current = current->next;		// 계속 오른쪽에 연결하겠다
		current->next = ptr;
		ptr->prev = current;
	}

	print();
}

void pop()
{	
	if (init == NULL)	//노드 생성안된거임(아무것도 붙여진게 없음)
		printf("Nothing to be popped\n");
	else if (init->next == NULL)	//초기로 돌아감(노드가 1개 들어있음)
	{
		free(init);
		init = NULL;
	}
	else                            // 노드가 최소 2개이상
	{
		struct node* current = init;

		while (current->next != NULL)
			current = current->next;

		current->prev->next = NULL;
		free(current);
	}
	
	print();
}

void print()			// 노드된걸 하나하나 출력하는거(연결된거 오른쪽으로 이동)
{
	if (init == NULL)	//아무것도 생성안된상태
		printf("The stack just emptied.");
	else {
		struct node* current = init;

		while (current->next != NULL)
		{
			
			printf("%d ", current->value);
			current = current->next;
			
		}
		printf("%d ", current->value);
		printf("\n");

	}	
}
