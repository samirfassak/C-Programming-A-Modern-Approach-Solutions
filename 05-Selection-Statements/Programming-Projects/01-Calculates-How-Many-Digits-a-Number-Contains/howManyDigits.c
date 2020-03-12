/* Name: howManyDigits.c
 * Purpose: asks the user to enter a number, then calculates how many digits this number contains.
 * Author: Fassak Samir
 * Date: 23-Jan-20 9:33 PM
 */
 

// Preprocessor directives
// Include section
#include <stdio.h>


int main(void)
{	
	int number;
	
	printf("Enter a 4 digits number : ");
	// Reads a 4 digits number
	scanf("%4d", &number);
	
	if (number >= 0 && number <= 9)
		printf("The number %d has 1 digit\n", number);
	else if (number > 9 && number <= 99)
		printf("The number %d has 2 digits\n", number);
	else if (number > 99 && number <= 999)
		printf("The number %d has 3 digits\n", number);
	else
		printf("The number %d has 4 digits\n", number);
	
	// Returns value 0 to the operating system
	return 0;
}