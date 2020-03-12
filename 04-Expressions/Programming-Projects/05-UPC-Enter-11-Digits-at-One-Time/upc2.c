/* 
 * Name: upc2.c
 * Purpose: Computes a Universal Product Code check digit.
 * In this version the user enters 11 digits at one time, instead of entering one digit, then five digits, and then an other five digits.
 * Author: Fassak Samir
 * Date: 21-Jan-20  10:25 PM
 */
 
 
 // Include section
 #include <stdio.h>
  
 
 int main(void)
 {
	 int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5, firstSum, secondSum, total;
	 	 
	 printf("Enter the first 11 digits  of a UPC : ");
	 scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d, &i1, &i2, &i3, &i4, &i5, &j1, &j2, &j3, &j4, &j5);
	 	 	  
	 firstSum = d + i2 + i4 + j1 + j3 + j5;
	 secondSum = i1 + i3 + i5 + j2 + j4;
	 total = 3 * firstSum + secondSum;
	 
	 printf("Check digit : %d\n", 9 - ((total - 1) % 10));
	 
	 // Returns to the operating system
	 return 0;
 } 