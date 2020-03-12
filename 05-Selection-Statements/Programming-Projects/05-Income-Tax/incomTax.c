/* 
 * Name: incomTax.c
 * Purpose: Asks the user to enter the amount of taxable income, then displays the tax due.
 * Date: 24-Jan-20  3:55 PM
 */
 
 
 // Preprocessor directive
 // Include section
 #include <stdio.h>
  
 
 int main(void)
 {
	 float income, amountOfTax;
	 
	 printf("Enter the amount of income : ");
	 scanf("%f", &income);
	 
	 if (income <= 750.00f)
		 amountOfTax = income * .01f;
	 else if (income <= 2250.00f)
		 amountOfTax = 7.50f + .02f * income;
	 else if (income <= 3750.00f)
		 amountOfTax = 37.50f + .03f * income;
	 else if (income <= 5250.00f)
		 amountOfTax = 82.50f + .04f * income;
	 else if (income <= 7000.00f)
		 amountOfTax = 142.50f + .05f * income;
	 else
		 amountOfTax = 230.00f + .06f * income;
	 
	 printf("Amount of tax is : %.2f", amountOfTax);
	 
	 // Returns value 0 to the operating system
	 return 0;
 } 