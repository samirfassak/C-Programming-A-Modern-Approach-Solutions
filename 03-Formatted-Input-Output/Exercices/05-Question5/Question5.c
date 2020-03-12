#include <stdio.h>

int main(void)
{
	int i;
	float x, y;
	
	printf("Enter x i y : ");
	scanf("%f%d%f", &x, &i, &y);
	
	printf("\nx = %f\ti = %d\ty = %f\n", x, i, y);
	
	return 0;
}