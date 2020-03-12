/* 
 * Name: dweightCondensed.c
 * Purpose: Computes the dimentional weight of a 12" x 10" x 8" box
 * Author: Fassak Samir
 * Date: 20-Jan-20  6:06 PM
 */
 
 
 // Preprocessor directive
 // Include section
 #include <stdio.h>
 
 
 int main(void)
 {
	// variables declaration
	//int height, lenght, width, volume, dimentionalWeight; 
	//int height, lenght, width; 
	
	// Variables declaration and initialization in one step
	// 8, 12, and 10 are called initializers in C jargon
	int height = 8, lenght = 12, width = 10;
	
	/*height = 8;
	lenght = 12;
	width = 10;*/
	
	//volume = height * lenght * width;
	
	// 166 is the allowed volume (in inches) per pound
	// 165 is added just to round division result to the next integer
	//dimentionalWeight = (volume + 165) / 166;
	
	printf("Dimensions (inches) : %dx%dx%d\n", lenght, width, height);
	//printf("Volume (cubic inches) : %d\n", volume);
	printf("Volume (cubic inches) : %d\n", height * lenght * width);
	//printf("Dimentional weight (pounds) : %d\n", dimentionalWeight);
	printf("Dimentional weight (pounds) : %d\n", (height * lenght * width + 165) / 166);
	
	return 0;
 }