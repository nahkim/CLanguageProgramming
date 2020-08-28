#include <stdio.h>
#include "lab11_array.h"

int main()
{
	int numbers[] = { 1,2,3,4,5,6,7,8,9,10 };

	get_sum_of_array(numbers, 10);
	print_array(numbers, 10);

	return 0;
}