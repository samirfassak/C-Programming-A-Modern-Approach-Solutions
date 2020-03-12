/* 
 * Name: estimateWindForce.c
 * Purpose: Asks the user to enter a wind speed (in knots), then display the corresponding description.
 * Date: 24-Jan-20  3:37 PM
 */
 
 
 // Preprocessor directive
 // Include section
 #include <stdio.h>
  
 
 int main(void)
 {
	 float windSpeed;
	 
	 printf("Enter a wind speed (in knots) : ");
	 scanf("%f", &windSpeed);
	 
	 if (windSpeed < 1)
		 printf("Calm");
	 else if (windSpeed <= 3)
		 printf("Light air");
	 else if (windSpeed >= 4 && windSpeed <= 27)
		 printf("Breeze");
	 else if (windSpeed >= 28 && windSpeed <= 47)
		 printf("Gale");
	 else if (windSpeed >= 48 && windSpeed <= 63)
		 printf("Storm");
	 else if (windSpeed > 63)
		 printf("Hurricane");
	 else
		 printf("Non handled case");
	 
	 // Returns value 0 to the operating system
	 return 0;
 } 