/* 
 * Name: printNumberInEnglish.c
 * Purpose: Asks the user for a two-digit number, then prints this number in english language.
 * Author: Fassak Samir
 * Date: 24-Jan-20  11:11 PM
 */
 
 
 // Preprocessor directives
 // Include section
 #include <stdio.h>
  
 
 int main(void)
 {
	 int number, onesDigit, tensDigit;
	 
	 printf("Enter a two-digit number : ");
	 scanf("%2d", &number);
	 
	 onesDigit = number % 10;
	 tensDigit = number / 10 % 10;
	 
	 switch (tensDigit) {
		 case 0:
		     switch (onesDigit) {
				 case 0:
				     printf("zero"); break;
				 case 1:
					 printf("one"); break;
				 case 2:
					 printf("two"); break;
				 case 3:
					 printf("three"); break;
				 case 4:
					 printf("four"); break;
				 case 5:
					 printf("five"); break;
				 case 6:
					 printf("six"); break;
				 case 7:
					 printf("seven"); break;
			     case 8:
					 printf("eight"); break;
				 case 9:
					 printf("nine"); break;
			 }
			 return 0;
		 case 1:
		     switch (onesDigit) {
				 case 0:
				     printf("ten"); break;
			     case 1:
				     printf("eleven"); break;
				 case 2:
					 printf("twelve"); break;
				 case 3:
					 printf("thirtheen"); break;
				 case 4:
					 printf("fourtheen"); break;
				 case 5:
					 printf("fiftheen"); break;
				 case 6:
					 printf("sixtheen"); break;
				 case 7:
					 printf("seventheen"); break;
				 case 8:
					 printf("eightheen"); break;
				 case 9:
					 printf("ninetheen"); break;
			 }
			 return 0;
		 case 2:
		     printf("twenty-"); break;
		 case 3:
			 printf("thirty-"); break;
		 case 4:
			 printf("fourty-"); break;
		 case 5:
			 printf("fifty-"); break;
		 case 6:
			 printf("sixty-"); break;
		 case 7:
			 printf("seventy-"); break;
		 case 8:
			 printf("eighty-"); break;
		 case 9:
			 printf("ninety-"); break;
	 }
	 
	 switch (onesDigit) {
		 case 1:
		     printf("one"); break;
		 case 2:
			 printf("two"); break;
		 case 3:
			 printf("three"); break;
		 case 4:
			 printf("four"); break;
		 case 5:
			 printf("five"); break;
		 case 6:
			 printf("six"); break;
		 case 7:
			 printf("seven"); break;
		 case 8:
			 printf("eight"); break;
		 case 9:
			 printf("nine"); break;
	 }
	 
	 // Returns value 0 to the operating system
	 return 0;
 } 