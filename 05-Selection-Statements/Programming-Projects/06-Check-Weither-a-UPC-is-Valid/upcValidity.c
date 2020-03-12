/* 
 * Name: upcValidity.c
 * Purpose: Checks wether a upc is valid. After the user enters a UPC, the program will display either VALID or NOT VALID.
 * Author: Fassak Samir
 * Date: 24-Jan-20  4:34 PM
 */
 
 
 // Preprocessor directives
 // Include section
 #include <stdio.h>
  
 
 int main(void)
 {
	 int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5, checkDigit, calculatedCheckDigit, firstSum, secondSum, total;
	 	 
	 printf("Enter a UPC : ");
	 scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d, &i1, &i2, &i3, &i4, &i5, &j1, &j2, &j3, &j4, &j5, &checkDigit);
	 	 
	 firstSum = d + i2 + i4 + j1 + j3 + j5;
	 secondSum = i1 + i3 + i5 + j2 + j4;
	 total = 3 * firstSum + secondSum;
	 
	 calculatedCheckDigit = 9 - ((total - 1) % 10);
	 
	 if (calculatedCheckDigit == checkDigit)
		 printf("VALID");
	 else
		 printf("INVALID");
	 
	 
	 // Returns to the operating system
	 return 0;
 } 