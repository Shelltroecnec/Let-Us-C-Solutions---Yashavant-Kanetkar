/* [C] - (b) */

/* The distance between two cities (in km.) is input through the keyboard. Write a program to convert and print
	this distance in meters, feet, inches and centimeters */

//Headers	
#include<stdio.h>

int main(){

	//Local declarations
	float km, fmeter, feet, finches, fcentimeter;
	
	printf("\n\t***DISTANCE CALCULATOR***\n");
	printf("\nEnter the Distance Between Two City (e.g. Delhi - Mumbai = 1,436km) :");
	scanf("%f",&km);
	fmeter = km*1000;
	feet = fmeter*3.28084;
	finches = feet * 12;
	fcentimeter = feet * 30.48;
	printf("\n\nEntered Kms = %.2f",km);
	printf("\nHence the Distance Between Two Cities, as follows below.\n");
	printf("\nMeters = %.2f\nFeet = %.2f\nInches = %.2f\nCentimeters = %.2f",fmeter,feet,finches,fcentimeter);

	return 0;
}
