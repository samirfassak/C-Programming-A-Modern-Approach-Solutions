/* 
 * Name: declareVarNoInit.c
 * Purpose: declares several int and float variables without initializing them and then prints their values
 * Author: Fassak Samir
 * Date: 20-Jan-20  6:15 PM
 */
 
 
 // Include section
 #include <stdio.h>
 
 int main(void)
 {
	 int var1, var2;
	 float var3, var4;
	 
	 printf("var1 = %d\nvar2 = %d\nvar3 = %.2f\nvar4 = %.2f\n", var1, var2, var3, var4);
	 
	 // Returns to the operating system
	 return 0;
 }	 
 
 
 
// When a variable is declared and not initialized its value will the value present in the memory location allocated to the variable
// It can be 0 or other random value
 