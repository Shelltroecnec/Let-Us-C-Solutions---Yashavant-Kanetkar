/* [C] - (d) */

/* Temperature of a city in Fahrenheit degrees is input through the keyboard.
	Write a program to convert this temperature into Centigrade degrees */

//Headers	
#include<stdio.h>

int main(){

	//Local Declarations
	float farhenheit, fcelsius;
	
	printf("\n\t***Farhenheit - Celsius Convertor***\n");
	printf("\nEneter Temperature in Farhenheit : ");
	scanf("%f",&farhenheit);
	//Convertion formula
	fcelsius = ((farhenheit-32)*5)/9;
	printf("\nTemperature in Celsius : %.2f^C",fcelsius);

	return 0;
}
