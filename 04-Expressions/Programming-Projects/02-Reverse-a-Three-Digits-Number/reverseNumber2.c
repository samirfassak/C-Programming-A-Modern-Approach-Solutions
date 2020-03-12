/* Name: reverseNumber2.c
 * Purpose: asks the user to enter a three-digit number, then prints the number with its digits reversed.
 * Author: Fassak Samir
 * Date: 22-Jan-20 2:48 PM
 */
 

#include <stdio.h>


int main(void)
{	
	int number;
	
	printf("Enter a three-digit number : ");
	//scanf("%3d", &number);
	scanf("%d", &number);
	
	//printf("%d", number);
	
	//printf("The reversal is : %d%d%d", number % 10, number % 100 / 10, number / 100);
	printf("The reversal is : %d%d%d", number % 10, number / 10 % 10, number / 100);
	
	return 0;
}