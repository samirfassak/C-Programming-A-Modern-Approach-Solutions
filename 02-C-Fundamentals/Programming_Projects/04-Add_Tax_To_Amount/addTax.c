/* 
 * Name: addTax.c
 * Purpose: asks the user to enter a dollars-and-cents amount, then displays the amount with 5% tax added
 * Author: Fassak Samir
 * Date: 20-Jan-20  7:30 PM
 */
 
 
 // Include section
 #include <stdio.h>
 
 // Macros definitions : 5% tax
 #define TAX_POURCENTAGE (5.0f / 100.0f)
 
 
 int main(void)
 {
	 // Statements
	 
	 // Variables declaration
	 float amount, amountWithTaxAdded;
	 
	 // Prompts the user to enter an amount
	 printf("Eneter an amount : ");
	 scanf("%f", &amount);
	 
	 // Computes amountWithTaxAdded = amount + TAX_POURCENTAGE * amount
	 amountWithTaxAdded = amount + TAX_POURCENTAGE * amount;
	 
	 // Prints amountWithTaxAdded
	 printf("With tax added : $%.2f", amountWithTaxAdded);
	 
	 // Returns to the operating system
	 return 0;
 } 