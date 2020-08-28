#include <stdio.h>
#include <time.h>


int get_ranNumber()
{
	int value;
	srand(time(NULL));
	value = rand() % 101 + 100;

	return value;
	
}


void print_Primes(int x)
{
	int i, j, prime = 1;
	for (i = 2; i <= x; i++) {
		prime = 1;
		for (j = 2; j < i; j++) {
			if (i % j == 0) 
				prime = 0;
			
			


		}
		if (prime == 1)
			printf("%d ",i);
	}

}


int main(void)
{
	int x = get_ranNumber();
	print_Primes(x);
	return 0;
}