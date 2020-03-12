/* 
 * Name: remainingBalance.c
 * Purpose: calculates the remaining balance on a loan after the first, second, and third monthly payments
 * Author: Fassak Samir
 * Date: 20-Jan-20  8:53 PM
 */
 
 
 // Include section
 #include <stdio.h>
  
 
 int main(void)
 {
	 // Statements
	 
	 // Declaration of some variables
	 float amountOfLoan, annualInterestRate, monthlyInterestRate, monthlyPayment, remainingBalance;
	 
	 printf("Eneter amount of loan : ");
	 scanf("%f", &amountOfLoan);
	 printf("Enter interest rate : ");
	 scanf("%f", &annualInterestRate);
	 printf("Enter monthly payment : ");
	 scanf("%f", &monthlyPayment);
	 
	 monthlyInterestRate = annualInterestRate / 100.0f / 12.0f;
	 remainingBalance = amountOfLoan + amountOfLoan * monthlyInterestRate - monthlyPayment;
	 printf("Ballance remaining after first payment : $%.2f\n", remainingBalance);
	 
	 remainingBalance = remainingBalance + remainingBalance * monthlyInterestRate - monthlyPayment;
	 printf("Ballance remaining after second payment : $%.2f\n", remainingBalance);
	 
	 remainingBalance = remainingBalance + remainingBalance * monthlyInterestRate - monthlyPayment;
	 printf("Ballance remaining after third payment : $%.2f\n", remainingBalance);
	 
	 // Returns to the operating system
	 return 0;
 } 