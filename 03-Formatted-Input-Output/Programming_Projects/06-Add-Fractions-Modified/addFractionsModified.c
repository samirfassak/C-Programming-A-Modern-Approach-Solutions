/* 
 * Name: addFractionsModified.c
 * Purpose: The user enters both fractions at the same time, separated by a plus sign.
 * Author: Fassak Samir
 * Date: 21-Jan-20  9:29 PM
 */
 
 
 // Include section
 #include <stdio.h>
  
 
 int main(void)
 {
	 int num1, denom1, num2, denom2, result_num, result_denom;
	 
	 printf("Enter two fractions separated by a plus sign : ");
	 scanf("%d / %d + %d / %d", &num1, &denom1, &num2, &denom2);
	 
	 result_num = num1 * denom2 + num2 * denom1;
	 
	 result_denom = denom1 * denom2;
	 
	 printf("The sum is %d / %d\n", result_num, result_denom);
	 
	 // Returns to the operating system
	 return 0;
 } 