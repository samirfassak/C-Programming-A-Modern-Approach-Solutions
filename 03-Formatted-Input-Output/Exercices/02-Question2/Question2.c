#include <stdio.h>

int main(void)
{
	float x = 80.32f;
	
	// Fixed decimal notation, right justified in a filed size of 6, no digits after the decimal point
	printf("%6.0f", x);
	
	return 0;
}