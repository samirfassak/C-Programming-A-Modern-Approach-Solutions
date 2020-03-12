/* 
 * Name: dateFormatConverter.c
 * Purpose: this program accepts a date from the user in the form mm/dd/yyyy and then displays it in the form yyyymmdd
 * Author: Fassak Samir
 * Date: 21-Jan-20  6:19 PM
 */
 
 
 // Preprocessor directives
 // Include section
 #include <stdio.h>
  
 
 int main(void)
 {
	 int day, month, year;
	 
	 printf("Enter a date (mm/dd/yyyy) : ");
	 scanf("%d/%d/%d", &month, &day, &year);
	 
	 printf("You entered the date %d%d%d\n", year, month, day);
	 
	 // Returns to the operating system
	 return 0;
 } 