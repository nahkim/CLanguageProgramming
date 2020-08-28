#include <stdio.h>

struct node {
	struct node* prev;
	struct node* next;
	int value;
};

struct node* init;

void insert(int v);
void _remove(int v);
void print();

int main(void)
{
	insert(10); insert(20); insert(15); insert(17); insert(5); insert(25); insert(3); insert(25); insert(23);
	_remove(15); _remove(25);  _remove(23);  _remove(3); _remove(25); _remove(17); _remove(10); _remove(20); _remove(5);

	return 0;
}

void insert(int v)	//Every inserted node should be sorted in ascending order of value.
{
	struct node* ptr = (struct node*)malloc(sizeof(struct node));
	ptr->value = v;
	ptr->next = NULL;
	ptr->prev = NULL;

	if (init == NULL)
		init = ptr;
	

	else
	{
		struct node* current = init;
		while (current->next != NULL && current->value < v)
			current = current->next;
		
		if(current->value > ptr->value&& current->prev == NULL)
		{
		ptr->next = current;
		current->prev = ptr;
		init = ptr;
		}
		
		else if (current->value > ptr->value && current->prev != NULL)
		{
			ptr->next = current;
			current->prev->next = ptr;
			ptr->prev = current->prev;
			current->prev = ptr;
			
		}
		else
		{
			current->next = ptr;
			ptr->prev = current;

		}
	}

	

	print();
}

void _remove(int v) //The node whose value is 'v' will be removed
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

		while (current->next != NULL && current->value != v)
			current = current->next;
		// 사이값
		
		// 맨앞 삭제		문제임,, init문제
		if (current->value == v && current->prev == NULL)
		{
			
			init = current->next;
			current->prev = NULL;

			free(current);
			
		}
		// 맨뒤 삭제
		else if(current->value == v && current->next == NULL)
		{
			current->prev->next = NULL;
			free(current);
		}

		else if (current->value == v)
		{
			current->next->prev = current->prev;
			current->prev->next = current->next;
			free(current);
		}
	}
	

	//You should call the function "free()" to prevent the memory leak.
	print();
}

void print()
{
	if (init == NULL)
		printf("The stack just emptited");
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
