/* 
 * Name: computePolynomial.c
 * Purpose: asks the user to enter a value for x and then display the value of the polynomial f(x) = 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6
 * Author: Fassak Samir
 * Date: 20-Jan-20  7:42 PM
 */
 
 
 // Include section
 #include <stdio.h>
  
 
 int main(void) {
	 // Statements
	 
	 // Variables declaration
	 float x, polynomialOutput;
	 
	 // Prompts the user to enter a value for x
	 printf("Eneter x : ");
	 scanf("%f", &x);
	 
	 // Computes f(x)
	 //polynomialOutput = 3.0f * x * x * x * x * x + 2.0f * x * x * x * x - 5.0f * x * x * x - x * x + 7.0f * x - 6;
	 
	 // This technique performs fewer multiplications (less cpu clock cycles). it is called Horner's Rule
	 polynomialOutput = ((((3.0f * x + 2.0f) * x - 5.0f) * x - 1.0f) * x + 7.0f) * x - 6;
	 
	 // Prints polynomialOutput
	 printf("f(x) = %.2f\n", polynomialOutput);
	 
	 // Returns to the operating system
	 return 0;
 } 