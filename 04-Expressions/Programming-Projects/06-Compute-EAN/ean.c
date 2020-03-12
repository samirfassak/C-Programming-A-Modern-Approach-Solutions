/* 
 * Name: ean.c
 * Purpose: Calculates the check digit for an EAN (European Article Number). The user will enter the first 12 digits of the EAN as a single number.
 * Author: Fassak Samir
 * Date: 23-Jan-20  12:53 PM
 */
 
 
 // Preprocessor directive
 // Include section
 #include <stdio.h>
  
 
 int main(void)
 {
	 int d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11, d12, firstSum, secondSum, total;
	 	 
	 printf("Enter the first 12 digits  of an EAN : ");
	 scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d1, &d2, &d3, &d4, &d5, &d6, &d7, &d8, &d9, &d10, &d11, &d12);
	 	 	  
	 firstSum = d2 + d4 + d6 + d8 + d10 + d12;
	 secondSum = d1 + d3 + d5 + d7 + d9 + d11;
	 total = 3 * firstSum + secondSum;
	 
	 printf("Check digit : %d\n", 9 - ((total - 1) % 10));
	 
	 // Returns to the operating system
	 return 0;
 } 