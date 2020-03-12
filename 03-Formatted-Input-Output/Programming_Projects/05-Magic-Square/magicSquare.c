/* 
 * Name: magicSquare.c
 * Purpose: this program asks the user to enter the numbers from 1 to 16 (in any order) then displays the numbers in a 4 by 4 arrangement, followed by the sum
 * of the rows, columns and diagonals.
 * Author: Fassak Samir
 * Date: 21-Jan-20  7:58 PM
 */
 
 
 // Preprocessor directives
 // Include section
 #include <stdio.h>
  
 
 int main(void) {
	 int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, n12, n13, n14, n15, n16;
	 
	 printf("Enter the numbers from 1 to 16 in any order : ");
	 scanf("%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10, &n11, &n12, &n13, &n14, &n15, &n16);
	 
	 // field size is 2, right justified
	 printf("%2d  %2d  %2d  %2d\n", n1, n2, n3, n4);
	 printf("%2d  %2d  %2d  %2d\n", n5, n6, n7, n8);
	 printf("%2d  %2d  %2d  %2d\n", n9, n10, n11, n12);
	 printf("%2d  %2d  %2d  %2d\n", n13, n14, n15, n16);
	 
	 printf("Sums of rows : %d %d %d %d\n", n1 + n2 + n3 + n4, n5 + n6 + n7 + n8, n9 + n10 + n11 + n12, n13 + n14 + n15 + n16);
	 
	 printf("Sums of columns : %d %d %d %d\n", n1 + n5 + n9 + n13, n2 + n6 + n10 + n14, n3 + n7 + n11 + n15, n4 + n8 + n12 + n16);
	 
	 // Returns value 0 to the operating system
	 return 0;
 }