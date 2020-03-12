/* Name: timeFormatConverter.c
 * Purpose: asks the user for a 24-hour time, then displays the time in 12-hour form.
 * Author: Fassak Samir
 * Date: 23-Jan-20 9:59 PM
 */
 

/* Preprocessor directives */
/* Include section */
#include <stdio.h>


int main(void) {	
	int hours, minutes;
	
	printf("Enter a 24-hour time (HH:MM) : ");
	scanf("%d:%d", &hours, &minutes);
	
	printf("Equivalent 12-hour time : ");
	
	if (hours == 0)
		printf("12:%.2d AM", minutes);
	else if (hours < 12)
		printf("%d:%.2d AM", hours, minutes);
	else if (hours == 12)
		printf("12:%.2d PM", minutes);
	
	else  /* (hours > 12 && hours <= 23) */
		printf("%d:%.2d PM", hours - 12, minutes);
	
	/* Returns value 0 to the operating system */
	return 0;
}