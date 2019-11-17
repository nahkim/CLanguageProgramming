#include <stdio.h>
#include <string.h>

int main(void)
{
	char src[] = "Hello";		//크기 6
	char dst[] = "Hollywood";	//크기 10

		strcpy(dst, src);
	printf("복사된 문자열 = %s \n", dst); //무엇이 출력될까요?	=Hello
															//실제 dst[] 안에는 무엇이 들어 있을까요?		Hello'\0'ood'\0'
	return 0;                                          // src = “Hollywood” 이고
}                                                            // dst = “Hello” 이면 어떻게 될까요?			에러가 난다.
