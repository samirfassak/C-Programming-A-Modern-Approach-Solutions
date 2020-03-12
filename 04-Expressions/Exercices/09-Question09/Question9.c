#include <stdio.h>

int main(void)
{
	/*int i, j, k;
	
	i = j = k = 1;
	
	i += j += k;
	
	printf("%d %d %d\n", i, j , k);*/
	
	
	/*int i = 1, j = 2, k = 3;
	
	i -= j -= k;
	
	printf("%d %d %d\n", i, j , k);*/
	
	int i = 2, j = 1, k = 0;
	
	i *= j *= k;
	
	printf("%d %d %d\n", i, j , k);
	
	printf("char takes %d bytes\n", (int) sizeof(char));
	
	printf("int takes %d bytes\n", (int) sizeof(int));
	
	printf("long takes %d bytes\n", (int) sizeof(long int));
	
	printf("short takes %d bytes\n", (int) sizeof(short int));
	
	printf("float takes %d bytes\n", (int) sizeof(float));
	
	printf("double takes %d bytes\n", (int) sizeof(double));
	
	return 0;
}