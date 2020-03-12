/* 
 * Name: convertTeleNumber.c
 * Purpose: this program prompts the user to enter a telephone number in the form (xxx) xxx-xxxx and then displays the number in the form xxx.xxx.xxxx
 * Author: Fassak Samir
 * Date: 21-Jan-20  7:40 PM
 */
 
 
 // Preprocessor directives
 // Include section
 #include <stdio.h>
  
 
 int main(void)
 {
	 int phoneNumberPart1, phoneNumberPart2, phoneNumberPart3;
	 
	 printf("Enter phone number [(xxx) xxx-xxxx] : ");
	 scanf("(%d) %d-%d", &phoneNumberPart1, &phoneNumberPart2, &phoneNumberPart3);
	 
	 printf("You entered : %d.%d.%d\n", phoneNumberPart1, phoneNumberPart2, phoneNumberPart3);
	 
	 // Returns value 0 to the operating system
	 return 0;
 }