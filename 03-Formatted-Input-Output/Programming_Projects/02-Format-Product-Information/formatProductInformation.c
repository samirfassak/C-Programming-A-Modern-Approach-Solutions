/* 
 * Name: formatProductInformation.c
 * Purpose: this program formats product information entered by the user
 * Author: Fassak Samir
 * Date: 21-Jan-20  6:29 PM
 */
 
 
 // Preprocessor directives
 // Include section
 #include <stdio.h>
  
 
 int main(void)
 {
	 int itemNumber, purchaseDay, purchaseMonth, purchaseYear;
	 float unitPrice;
	 
	 printf("Enter item number : ");
	 scanf("%d", &itemNumber);
	 
	 printf("Enter unit price : ");
	 scanf("%f", &unitPrice);
	 
	 printf("Enter purchase date (mm/dd/yyyy) : ");
	 scanf("%d/%d/%d", &purchaseMonth, &purchaseDay, &purchaseYear);
	 
	 printf("Item\t\tUnit\t\tPurchase\n\t\tPrice\t\tDate\n%d\t\t$%7.2f\t%d/%d/%d\n", itemNumber, unitPrice, purchaseMonth, purchaseDay, purchaseYear);
	 
	 
	 // Returns value 0 to the operating system
	 return 0;
 }