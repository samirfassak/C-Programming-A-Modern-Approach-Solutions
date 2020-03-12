/* 
 * Name: payAmount.c
 * Purpose: asks the user to enter a U.S dollar amount and then shows how to pay that amount
 * using the smallest number of $20, $10, $5, and $1 bills.
 * Author: Fassak Samir
 * Date: 20-Jan-20  8:20 PM
 */
 
 
 // Include section
 #include <stdio.h>
  
 
 int main(void)
 {
	 // Statements
	 
	 // Variables declaration
	 int dollarAmount;
	 
	 // Prompts the user to enter a U.S dollar amount
	 printf("Eneter dollarAmount : ");
	 scanf("%d", &dollarAmount);
	 
	 printf("$20 bills : %d\n", dollarAmount / 20);
	 //printf("$10 bills : %d\n", (dollarAmount - (dollarAmount / 20) * 20) / 10);
	 printf("$10 bills : %d\n", (dollarAmount % 20) / 10);
	 //printf("$5 bills : %d\n", ((dollarAmount - (dollarAmount / 20) * 20) - ((dollarAmount - (dollarAmount / 20) * 20) / 10) * 10) / 5);
	 printf("$5 bills : %d\n", (dollarAmount % 10) / 5);
	 //printf("$1 bills : %d\n", ((dollarAmount - (dollarAmount / 20) * 20) - ((dollarAmount - (dollarAmount / 20) * 20) / 10) * 10) - (((dollarAmount - (dollarAmount / 20) * 20) - ((dollarAmount - (dollarAmount / 20) * 20) / 10) * 10) / 5) * 5);
	 printf("$1 bills : %d\n", dollarAmount % 5);
	 
	 // Returns to the operating system
	 return 0;
 } 