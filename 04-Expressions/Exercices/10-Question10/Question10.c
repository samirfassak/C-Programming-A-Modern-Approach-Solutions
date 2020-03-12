#include <stdio.h>

int main(void)
{
	/*int i = 6, j;
	
	j = i += i;*/
	
	/*int i = 5, j;
	
	j = (i -= 2) + 1;*/
	
	/*int i = 7, j;
	
	j = 6 + (i = 2.5);*/
	
	int i = 2, j = 8;
	
	j = (i = 6) + (j = 3);
	
	printf("%d %d\n", i, j);
	
	return 0;
}