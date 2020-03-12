/* Name: displayOctal.c
 * Purpose: Reads an integer entered by the user and displays it in octal (base 8).
 * Author: Fassak Samir
 * Date: 22-Jan-20 9:37 PM
 */
 

// Preprocessor directives
// Include section
#include <stdio.h>


int main(void)
{	
	int number, digit0, digit1, digit2, digit3, digit4;
	
	printf("Enter a number between 0 and 32767 : ");
	scanf("%d", &number);
	
	digit0 = number % 8;
	number /= 8;
	
	digit1 = number % 8;
	number /= 8;
	
	digit2 = number % 8;
	number /= 8;
	
	digit3 = number % 8;
	number /= 8;
	
	digit4 = number % 8;
	
	printf("In octal, your number is : %d%d%d%d%d", digit4, digit3, digit2, digit1, digit0);
	
	// Returns value 0 to the operating system
	return 0;
}