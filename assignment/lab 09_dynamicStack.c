#include <stdio.h>
#include <stdlib.h>

struct node {			// ����ü�� ũ��� ��12byte
	struct node* prev;	// ����ü�� 4byte
	struct node* next;	// ����ü�� 4byte
	int value;			// int�� 4byte
};

struct node* init;		// struct node�� ������(�ּҰ� �����ִ� ������) 4byte��

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
	struct node* ptr = (struct node*)malloc(sizeof(struct node));		// struct node ���·� �����̴�.
	ptr->value = v;		// ptr�� �ּҸ� ���󰡼� value�� �ִ´�
	ptr->next = NULL;	// ptr�� �ּҸ� ���󰡼� NULL�� �ִ´�
	ptr->prev = NULL;	// ptr�� �ּҸ� ���󰡼� NULL�� �ִ´�

	if (init == NULL)	
	{
		init = ptr;		// ù��° struct�� ����Ű����,���������� �Լ��ȿ� ���� 0�̵�
	}
	else {
		struct node* current = init;
		while (current->next != NULL)		// ������ ����� ��
			current = current->next;		// ��� �����ʿ� �����ϰڴ�
		current->next = ptr;
		ptr->prev = current;
	}

	print();
}

void pop()
{	
	if (init == NULL)	//��� �����ȵȰ���(�ƹ��͵� �ٿ����� ����)
		printf("Nothing to be popped\n");
	else if (init->next == NULL)	//�ʱ�� ���ư�(��尡 1�� �������)
	{
		free(init);
		init = NULL;
	}
	else                            // ��尡 �ּ� 2���̻�
	{
		struct node* current = init;

		while (current->next != NULL)
			current = current->next;

		current->prev->next = NULL;
		free(current);
	}
	
	print();
}

void print()			// ���Ȱ� �ϳ��ϳ� ����ϴ°�(����Ȱ� ���������� �̵�)
{
	if (init == NULL)	//�ƹ��͵� �����ȵȻ���
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
