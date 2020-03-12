/* 
 * Name: dateEarlier.c
 * Purpose: Prompts the user to enter two dates and then indicates which date comes earlier on the calendar.
 * Author: Fassak Samir
 * Date: 24-Jan-20  9:06 PM
 */
 
 
 // Preprocessor directives
 // Include section
 #include <stdio.h>
  
 
 int main(void)
 {
	 int month1, day1, year1, month2, day2, year2;
	 
	 printf("Enter first date (mm/dd/yy) : ");
	 scanf("%d/%d/%d", &month1, &day1, &year1);
	 
	 printf("Enter second date (mm/dd/yy) : ");
	 scanf("%d/%d/%d", &month2, &day2, &year2);
	 
	 if (year1 < year2)
		 printf("%d/%d/%.2d is earlier than %d/%d/%.2d", month1, day1, year1, month2, day2, year2);
	 else if (year1 == year2) {
		 if (month1 < month2)
			 printf("%d/%d/%.2d is earlier than %d/%d/%.2d", month1, day1, year1, month2, day2, year2);
		 else if (month1 == month2) {
			 if (day1 < day2)
				 printf("%d/%d/%.2d is earlier than %d/%d/%.2d", month1, day1, year1, month2, day2, year2);
			 else if (day1 == day2)
				 printf("the two dates match");
			 else
				 printf("%d/%d/%.2d is earlier than %d/%d/%.2d", month2, day2, year2, month1, day1, year1);
		 } else
			 printf("%d/%d/%.2d is earlier than %d/%d/%.2d", month2, day2, year2, month1, day1, year1);
	 } else
		 printf("%d/%d/%.2d is earlier than %d/%d/%.2d", month2, day2, year2, month1, day1, year1);
		 
	 
	 // Returns value 0 to the operating system
	 return 0;
 } 