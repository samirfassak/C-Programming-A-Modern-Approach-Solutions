#include <stdio.h>


int main(void)
{
	int i = 2, j = 3, k;
	
	// The multiplication operator has higher precedence than the equality operator
	// Therefore i * j is evaluated first which gives 6, 6 is compared with 6, they are equal so value 1 is assigned to k
	k = i * j == 6;
	
	printf("%d", k);
	
	return 0;
}