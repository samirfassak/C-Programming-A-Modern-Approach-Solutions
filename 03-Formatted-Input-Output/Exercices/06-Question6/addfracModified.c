/* 
 * Name: addfracModified.c
 * Purpose: To illustrate scanf's ability to match patterns, consider the problem of reading a fraction entered by the user. Fractions
 * are customarily written in the form numerator / denominator. Instead of having the user enter the numerator and denominator of a fraction as 
 * separate integers, scanf makes it possible to read the entire fraction. The following program which adds two fractions, illustrates this technique.
 * The program is modified so that the user is allowed to enter fractions that contain spaces before and after the / charcater.
 * Author: Fassak Samir
 * Date: 21-Jan-20  6:10 PM
 */
 
 
 // Include section
 #include <stdio.h>
  
 
 int main(void)
 {
	 int num1, denom1, num2, denom2, result_num, result_denom;
	 
	 printf("Enter first fraction : ");
	 //scanf("%d/%d", &num1, &denom1);
	 scanf("%d / %d", &num1, &denom1);
	 
	 printf("Enter second fraction : ");
	 //scanf("%d/%d", &num2, &denom2);
	 scanf("%d / %d", &num2, &denom2);
	 
	 result_num = num1 * denom2 + num2 * denom1;
	 
	 result_denom = denom1 * denom2;
	 
	 //printf("The sum is %d/%d", result_num, result_denom);
	 printf("The sum is %d / %d", result_num, result_denom);
	 
	 // Returns to the operating system
	 return 0;
 } 