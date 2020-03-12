#include <stdio.h>

int main(void)
{
	int i, j;
    float x;

	printf("Enter i x j : ");
	scanf("%d%f%d", &i, &x, &j);
	
	printf("\ni = %d\tx = %f\tj = %d", i, x, j);
	
	return 0;
}