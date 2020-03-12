/* 
 * Name: largestSmallest.c
 * Purpose: Finds the largest and smallest of four integers entered by the user.
 * Author: Fassak Samir
 * Date: 24-Jan-20  6:46 PM
 */
 
 
 // Preprocessor directives
 // Include section
 #include <stdio.h>
  
 
 int main(void)
 {
	 int number, largest, smallest;
	 
	 printf("Enter four integers : ");
	 
	 scanf("%d", &number);
	 
	 largest = smallest = number;
	 
	 for (int i = 0; i < 3; i++) {
		 scanf("%d", &number);
		 if (number > largest)
			 largest = number;
		 if (number < smallest)
			 smallest = number;
	 }
	 
	 printf("Largest : %d\n", largest);
	 printf("Smallest : %d\n", smallest);
	 
	 // Returns to the operating system
	 return 0;
 } 