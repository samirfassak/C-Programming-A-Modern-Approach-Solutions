/* 
 * Name: volumeSphere.c
 * Purpose: Computes the volume of a sphere with a 10 meters radius using the formula v = (4/3) * pi * r^3
 * Author: Fassak Samir
 * Date: 20-Jan-20  7:01 PM
 */
 
 
 // Include section
 #include <stdio.h>
 
 // Macros definitions
 #define _PI_ 3.14159f
 //#define SPHERE_RADIUS 10.0f
 
 
 int main(void) {
	 // Statements
	 
	 // Variables declaration
	 float sphereRadius, sphereVolume;
	 
	 // Prompts the user to enter the volume of the sphere
	 printf("Eneter sphere radius : ");
	 scanf("%f", &sphereRadius);
	 
	 // Computes sphereVolume using the formula v = (4/3) * pi * r^3
	 //sphereVolume = (4.0f / 3.0f) * _PI_ * SPHERE_RADIUS * SPHERE_RADIUS * SPHERE_RADIUS;
	 //sphereVolume = (4 / 3) * _PI_ * SPHERE_RADIUS * SPHERE_RADIUS * SPHERE_RADIUS;
	 sphereVolume = (4.0f / 3.0f) * _PI_ * sphereRadius * sphereRadius * sphereRadius;
	 
	 //printf("The volume of a sphere with radius of 10 meters is : %.2f", sphereVolume);
	 printf("The volume of the sphere is : %.2f", sphereVolume);
	 
	 // Returns to the operating system
	 return 0;
 } 