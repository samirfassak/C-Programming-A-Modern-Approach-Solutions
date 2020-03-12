/* 
 * Name: numericalToLetter.c
 * Purpose: Converts a numerical grade entered by the user to letter grade.
 * Author: Fassak Samir
 * Date: 24-Jan-20  9:39 PM
 */
 
 
 // Preprocessor directives
 // Include section
 #include <stdio.h>
  
 
 int main(void)
 {
	 int numericalGrade, tensDigit;
	 
	 printf("Enter numerical grade : ");
	 scanf("%d", &numericalGrade);
	 
	 if (numericalGrade > 100 || numericalGrade < 0)
		 printf("Error!");
	 else if (numericalGrade == 100)
		 printf("Letter grade : A");
	 else {
		 tensDigit = numericalGrade / 10;
		 switch (tensDigit) {
			 case 9:
			     printf("Letter grade : A"); break;
			 case 8:
				 printf("Letter grade : B"); break;
			 case 7:
				 printf("Letter garde : C"); break;
			 case 6:
				 printf("Letter grade : D"); break;
			 case 0: case 1: case 2: case 3: case 4: case 5:
				 printf("Letter grade : F"); break;
		 }
	 }
	 
	 // Returns value 0 to the operating system
	 return 0;
 } 