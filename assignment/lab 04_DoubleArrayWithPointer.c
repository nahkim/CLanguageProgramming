#include<stdio.h>
// bubble sort
int main() {
	// 4*25 = 100 byte = sort
	int sort[5][5] = { {5,4,20,21,22},{25,18,17,16,9}, {8,23,19,6,2},{15,11,13,12,3},{1,24,14,7,10} };
	int tmp1;
	int i, j;

	 
/*
	printf("The address of sort %d\n", sort);

	printf("The address of sort[0] %d\n", sort[0]);		//sort = sort[0]
	printf("The address of sort[1] %d\n", sort[1]);
	printf("The address of sort[2] %d\n", sort[2]);
	printf("The address of sort[3] %d\n", sort[3]);
	printf("The address of sort[4] %d\n", sort[4]);


	printf("sort[0][5] = %d\n", sort[0][5]);		//25
	printf("sort[0][6] = %d\n", sort[0][6]);		//18

	printf("sort[1][0] = %d\n", sort[1][0]);		//25
	printf("sort[1][5] = %d\n", sort[1][5]);		//8


	printf("sort[2][0] = %d\n", sort[2][0]);		//8
	printf("sort[2][5] = %d\n", sort[2][5]);		//15


	//The (double array) variable "sort" should be sorted as follows.
	//sort[5][5] = { {1,2,3,4,5},{6,7,8,9,10}, {11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25}};
	//direction
	//(1) Don't use any additional variable. 
	//(2) Only a double loop (double "for" syntex) is allowed. 

	*/
	for (i=0;i<24;i++)
	{
		for (j=0;j<24;j++)
		{
			
			if (*(sort[0]+j) > sort[0][j + 1]) {
				tmp1 = sort[0][j];
				sort[0][j] = sort[0][j + 1];
				sort[0][j + 1] = tmp1;
			}
			
		}
	}



	printf("The aligned values are: ");
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%d ", sort[i][j]);
		}
	}
}