#include<stdio.h>

// bubble sort
int main() 
{

	int sort[5][5] = { {5,4,20,21,22},{25,18,17,16,9},{8,23,19,6,2},{15,11,13,12,3},{1,24,14,7,10} };
	int tmp1, tmp2;
	int i, j, x, y;

	//�߰����� ������ ���� �ʰ� 
	//sort[5][5]�� �����Ͱ� = { {1,2,3,4,5},{6,7,8,9,10}, {11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25}};
	//�� �ǵ��� �����ϴ� �ڵ带 �ϼ��ϼ���.
	

	for (x = 0; x <5; x++) {
		for (y = 5; y > 0; y--) {
			for (i=0 ; i < 5; i++) {
				for (j=0; j < 4; j++) {
					if (sort[i][j] > sort[i][j + 1]) {
						tmp1 = sort[i][j + 1];
						sort[i][j + 1] = sort[i][j];
						sort[i][j] = tmp1;
					}
				
					
					
				}
				if (i < 4 && j == 4) {
					if (sort[i][j] > sort[i + 1][0]) {
						tmp2 = sort[i][j];
						sort[i][j] = sort[i + 1][0];
						sort[i + 1][0] = tmp2;


					}
				}
			}
		}
	}
	


	printf("���ĵ� ���� :  ");
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%d ", sort[i][j]);
		}
	}
}