#include <stdio.h>


int main(void)
{
	/*int i = 1;*/
	
	/*int i = 10, j = 5;*/
	
	int i = 3, j = 4, k = 5;
	
	printf("%d ", i++ - j++ + --k);
	
	printf("%d %d %d", i, j, k);
	
	
	return 0;
}