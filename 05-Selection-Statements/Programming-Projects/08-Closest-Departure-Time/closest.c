/* 
 * Name: closest.c
 * Purpose: Asks the user to enter a time in 24-hour clock, then displays the departure and arrival time for the flight whose
 * departure time is closest to that entered by the user.
 * Author: Fassak Samir
 * Date: 24-Jan-20  8:07 PM
 */
 
 
 // Preprocessor directives
 // Include section
 #include <stdio.h>
  
 
 int main(void)
 {
	 int hours, minutes, timeInMinutesSinceMidnight,
	 deparTimeInMinSinceMidnight1, deparTimeInMinSinceMidnight2, deparTimeInMinSinceMidnight3, deparTimeInMinSinceMidnight4, deparTimeInMinSinceMidnight5,
	 deparTimeInMinSinceMidnight6, deparTimeInMinSinceMidnight7, deparTimeInMinSinceMidnight8,
	 diff1, diff2, diff3, diff4, diff5, diff6, diff7, diff8,
	 smallest;
	 
	 printf("Enter a 24-hour time (HH:MM) : ");
	 scanf("%d:%d", &hours, &minutes);
	 
	 timeInMinutesSinceMidnight = hours * 60 + minutes;
	 
	 deparTimeInMinSinceMidnight1 = 8 * 60 + 0;
	 deparTimeInMinSinceMidnight2 = 9 * 60 + 43;
	 deparTimeInMinSinceMidnight3 = 11 * 60 + 19;
	 deparTimeInMinSinceMidnight4 = 12 * 60 + 47;
	 deparTimeInMinSinceMidnight5 = 14 * 60 + 0; // 2:00 PM
	 deparTimeInMinSinceMidnight6 = 15 * 60 + 45;
	 deparTimeInMinSinceMidnight7 = 19 * 60 + 0;
	 deparTimeInMinSinceMidnight8 = 21 * 60 + 45;
	 
	 diff1 = timeInMinutesSinceMidnight - deparTimeInMinSinceMidnight1;
	 diff2 = timeInMinutesSinceMidnight - deparTimeInMinSinceMidnight2;
	 diff3 = timeInMinutesSinceMidnight - deparTimeInMinSinceMidnight3;
	 diff4 = timeInMinutesSinceMidnight - deparTimeInMinSinceMidnight4;
	 diff5 = timeInMinutesSinceMidnight - deparTimeInMinSinceMidnight5;
	 diff6 = timeInMinutesSinceMidnight - deparTimeInMinSinceMidnight6;
	 diff7 = timeInMinutesSinceMidnight - deparTimeInMinSinceMidnight7;
	 diff8 = timeInMinutesSinceMidnight - deparTimeInMinSinceMidnight8;
	 
	 if (diff1 < 0)
		 diff1 = -diff1;
	 
	 if (diff2 < 0)
		 diff2 = -diff2;
	 
	 if (diff3 < 0)
		 diff3 = -diff3;
	 
	 if (diff4 < 0)
		 diff4 = -diff4;
	 
	 if (diff5 < 0)
		 diff5 = -diff5;
	 
	 if (diff6 < 0)
		 diff6 = -diff6;
	 
	 if (diff7 < 0)
		 diff7 = -diff7;
	 
	 if (diff8 < 0)
		 diff8 = -diff8;
	 
	 
	 // Here we should find the smallest integer between diff1, diff2, . . . , diff8
	 smallest = diff1;
	 
	 if (diff2 < smallest)
		 smallest = diff2;
	 if (diff3 < smallest)
		 smallest = diff3;
	 if (diff4 < smallest)
		 smallest = diff4;
	 if (diff5 < smallest)
		 smallest = diff5;
	 if (diff6 < smallest)
		 smallest = diff6;
	 if (diff7 < smallest)
		 smallest = diff7;
	 if (diff8 < smallest)
		 smallest = diff8;
	 
	 if (smallest == diff1)
		 printf("The closest departure time is 8:00 AM\n");
	 else if (smallest == diff2)
		 printf("The closest departure time is 9:43 AM\n");
	 else if (smallest == diff3)
		 printf("The closest departure time is 11:19 AM\n");
	 else if (smallest == diff4)
		 printf("The closest departure time is 12:47 PM\n");
	 else if (smallest == diff5)
		 printf("The closest departure time is 2:00 PM\n");
	 else if (smallest == diff6)
		 printf("The closest departure time is 3:45 PM\n");
	 else if (smallest == diff7)
		 printf("The closest departure time is 7:00 PM\n");
	 else
		 printf("The closest departure time is 9:45 PM\n");
	 
	 
	 // Returns value 0 to the operating system
	 return 0;
 } 