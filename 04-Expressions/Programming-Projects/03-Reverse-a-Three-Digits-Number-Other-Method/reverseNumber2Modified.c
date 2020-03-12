/* Name: reverseNumber2Modified.c
 * Purpose: asks the user to enter a three-digit number, then prints the number with its digits reversed.
 * In this version we reverse the number digits without using arithmetic to split the number into digits
 * Author: Fassak Samir
 * Date: 22-Jan-20 2:48 PM
 */
 

// Preprocessor directives
// Include section
#include <stdio.h>


int main(void)
{	
	int hundredsDigit, tensDigit, onesDigit;
	
	printf("Enter a three-digit number : ");
	//scanf("%3d", &number);
	//scanf("%d%d%d", &hundredsDigit, &tensDigit, &onesDigit);
	scanf("%1d%1d%1d", &hundredsDigit, &tensDigit, &onesDigit);
	
	//printf("%d", number);
	
	//printf("The reversal is : %d%d%d", number % 10, number % 100 / 10, number / 100);
	//printf("The reversal is : %d%d%d", number % 10, number / 10 % 10, number / 100);
	printf("The reversal is : %d%d%d", onesDigit, tensDigit, hundredsDigit);
	
	// Returns value 0 to the operating system
	return 0;
}