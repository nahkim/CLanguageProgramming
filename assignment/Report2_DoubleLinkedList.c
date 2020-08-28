#include <stdio.h>

struct node {
	struct node* prev;
	struct node* next;
	int value;
};

struct node array[10];
int g_index = -1;
struct node* init;

void insert(int v);
void _remove(int v);
void print();

int main(void)
{
	insert(10); insert(20);insert(15); insert(17); insert(5); insert(25); insert(3); insert(25); insert(23);
	_remove(15); _remove(25);  _remove(23);  _remove(3); _remove(25); _remove(17); _remove(10); _remove(20); _remove(5);

	return 0;
}

void insert(int v)
{
	//Managed nodes are defined as ones each whose value is not zero.
//'init' always indicates the node whose value is minimal among managed nodes. 
//e.g., managed nodes are '10', '20', and '15' (meaning insert(10); insert(20);insert(15); are called in turn), then, 'init' indicates the node whose value is '10'. 
//All managed nodes are connected each other with member variables 'prev' and 'next'. 
//Also, for each node (of managed ones), the value of the 'prev' node should be smaller than the node (except the first one), and
//the value of the 'next' node should be larger than the node (except the last one).
//'g_index' always indicates the index (of struct node array) of the node whose value was recently assigned.
//e.g., managed nodes are '10', '20', and '15'(meaning insert(10); insert(20);insert(15); are called in turn), then, array[g_index] indicates the node whose value is 15. 
//'prev' of the node indicated by 'init' is null.
//'next' of the last node among manage nodes is null.
	g_index++;

	if (g_index == 0)
		init = &array[g_index];

	
		
	else
	{
		struct node* current = init;

		while (1) {

			if (current->value > v && current->prev == NULL)
			{
			current->prev = &array[g_index];
			array[g_index].next = current;
			init = &array[g_index];	
			break;
			}

			else if (current->value > v && current->prev->value < v)
			{		
				current->prev->next = &array[g_index];
				array[g_index].prev = current->prev;
				array[g_index].next = current;
				current->prev = &array[g_index];
				break;

			}

			else if(current->next == NULL)
			{
				current->next = &array[g_index];
				array[g_index].prev = current;
				break;
			}
			
			current= current->next;

		}
	}
	array[g_index].value = v;

	//the function 'print' should be called before the end of 'insert' function
	print();

}

void _remove(int v)
{
	//Suppose that there are three nodes A, B (whose value is v), and C, and 'prev' of B is A, and 'next' of B is C.
	//After this function, 'next' of A becomes C, and prev of C is A, meaning that B is logically removed from managed nodes.  
	//If 'next' of B is null (i.e., there are only A and B in managed nodes), A's 'next' becomes null. 
	//If 'prev' of B is null (i.e., there are only B and C in managed nodes), C's 'prev' becomes null. 
	//'init' always indicates the node whose value is minimal among managed nodes. 
	//If there is only B in a set of manage nodes (currently, 'next' and 'prev' of B should be null), 'init' gets to indicates null.
	
	struct node* current = init;

	while (1) {
		
		if (init == NULL)	//노드 생성안된거임(아무것도 붙여진게 없음)
			break;
		else if (init->next == NULL)	//초기로 돌아감(노드가 1개 들어있음)
		{
			init = NULL;
			break;
		}
		else {
		
			
			if (current->value == v && current->prev == NULL)	// 맨 앞값
			{
				init = current->next;
				current->next->prev = NULL;
				current->next = NULL;

				break;

			}

			else if (current->value == v && current->next == NULL)	// 맨 끝값
			{
				current->prev->next = NULL;
				current->prev = NULL;
				break;
			}

			else if (current->value == v)	// 사이값
			{
				current->next->prev = current->prev;
				current->prev->next = current->next;

				current->next = NULL;
				current->prev = NULL;
				break;
			}
			
			
			
		}

		current = current->next;
	}


	//the function 'print' should be called before the end of '_remove' function
	print();
}

void print()
{
	if (init == NULL)
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
