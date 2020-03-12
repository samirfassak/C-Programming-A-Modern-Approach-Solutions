#include <stdio.h>


int main(void)
{
	/*int i = 7, j = 8, k = 9;
	
	printf("%d\n", (i = j) || (j = k));
	
	printf("%d %d %d", i, j, k);*/
	
	int i = 1, j = 1, k = 1;
	
	printf("%d\n", ++i || ++j && ++k);
	
	printf("%d %d %d", i, j, k);
	
	return 0;
}