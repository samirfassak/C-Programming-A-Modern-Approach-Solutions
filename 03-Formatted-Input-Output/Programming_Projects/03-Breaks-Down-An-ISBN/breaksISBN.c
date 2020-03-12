/* 
 * Name: breaksISBN.c
 * Purpose: this program breaks down an ISBN entered by the user
 * Author: Fassak Samir
 * Date: 21-Jan-20  7:20 PM
 */
 
 
 // Preprocessor directives
 // Include section
 #include <stdio.h>
  
 
 int main(void)
 {
	 int GS1_prefix, groupIdentifier, publisherCode, itemNumber, checkDigit;
	 
	 printf("Enter ISBN : ");
	 scanf("%d-%d-%d-%d-%d", &GS1_prefix, &groupIdentifier, &publisherCode, &itemNumber, &checkDigit);
	 
	 printf("GS1 prefix : %d\n", GS1_prefix);
	 printf("Group identifier : %d\n", groupIdentifier);
	 printf("Publisher Code : %d\n", publisherCode);
	 printf("Item Number : %d\n", itemNumber);
	 printf("Check digit : %d\n", checkDigit);
	 
	 // Returns value 0 to the operating system
	 return 0;
 }