/* 
 * Name: broker2.c
 * Purpose: Asks the user to enter the number of shares and the price per share, instead of the value of the trade. Add statements that compute
 * the commission charged by a rival broker ($33 plus 3% per share for fewer than 2000 shares; $33 plus 2% per share for 2000 shares or more). Display
 * the rival's commission as well as the commission charged by the original broker.
 * Author: Fassak Samir
 * Date: 24-Jan-20  2:48 PM
 */
 
 
 // Preprocessor directive
 // Include section
 #include <stdio.h>
  
 
 int main(void)
 {
	 float originalCommission, rivalCommission, valueOfTrade, pricePerShare;
	 int numberOfShares;
	 
	 printf("Enter the number of shares : ");
	 scanf("%d", &numberOfShares);
	 
	 printf("Enter the price per share : ");
	 scanf("%f", &pricePerShare);
	 
	 valueOfTrade = numberOfShares * pricePerShare;
	 
	 if (numberOfShares < 2000)
		 rivalCommission = 33.00f + .03f * valueOfTrade;
	 else
		 rivalCommission = 33.00f + .02f * valueOfTrade;
	 
	 if (valueOfTrade < 2500.00f)
		 originalCommission = 30.00f + .017f * valueOfTrade;
	 else if (valueOfTrade < 6250.00f)
		 originalCommission = 56.00f + .0066f * valueOfTrade;
	 else if (valueOfTrade < 20000.00f)
		 originalCommission = 76.00f + .0034f * valueOfTrade;
	 else if (valueOfTrade < 50000.00f)
		 originalCommission = 100.00f + .0022f * valueOfTrade;
	 else if (valueOfTrade < 500000.00f)
		 originalCommission = 155.00f + .0011f * valueOfTrade;
	 else
		 originalCommission = 255.00f + .0009f * valueOfTrade;
	 
	 if (originalCommission < 39.00f)
		 originalCommission = 39.00f;
	 
	 printf("Original commission : $%.2f\n", originalCommission);
	 
	 printf("Rival commission : $%.2f\n", rivalCommission);
	 
	 // Returns value 0 to the operating system
	 return 0;
 } 